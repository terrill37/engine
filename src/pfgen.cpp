#include <pfgen.h>

using namespace vec;

void ParticleForceRegistry::updateForces(real duration){
    Registry::iterator i = registrations.begin();
    for(; i != registrations.end(); i++){
        i->fg->updateForce(i->particle, duration);
    }
}

void ParticleGravity::updateForce(Particle* particle, real duration){
    if(!particle->hasFiniteMass()) return;
    particle->addForce(gravity * particle->getMass());
}

void ParticleDrag::updateForce(Particle* particle, real duration){
    Vector3 force;
    particle->getVelocity(&force);

    real dragCoeff = force.magnitude();
    dragCoeff = k1*dragCoeff + k2*dragCoeff*dragCoeff;

    force.normalize();
    force *= -dragCoeff;
    particle->addForce(force);
}

