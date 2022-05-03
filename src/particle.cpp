#include <assert.h>

#include "particle.h"
//#include "precision.h"
//#include "vector.h"
//#include "particle.h"

using namespace vec;

void Particle::integrate(real duration){
    assert(duration > 0.0);

    position.addScaledVector(velocity, duration);
    
    Vector3 resultingAcc = acceleration;
    resultingAcc.addScaledVector(forceAccum, inverseMass);

    velocity.addScaledVector(resultingAcc, duration);

    velocity *= real_pow(damping, duration);

    clearAccumulator();
}

void Particle::clearAccumulator(){
    forceAccum.clear();
}

void Particle::addForce(const Vector3 &force){
    forceAccum += force;
}

