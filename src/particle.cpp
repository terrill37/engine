#include <assert.h>
#include <particle.h>

using namespace vec;

void Particle::integrate(real duration){
    assert(duration > 0.0);

    position.addScaledVector(velocity, duration);
    
    Vector3 resultingAcc = acceleration;
    resultingAcc.addScaledVector(velocity, duration);

    velocity.addScaledVector(resultingAcc, duration);

    velocity *= real_pow(damping, duration);
}
