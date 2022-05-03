
#include "precision.h"
#include "vector.h"

using namespace vec;
class Particle{
    public:
        Vector3 position;
        Vector3 velocity;
        Vector3 acceleration;
        
        real damping;
        real inverseMass;
        
        void integrate(real duration);
        
        //accumulated force
        Vector3 forceAccum;
        //clear forces applied, called automatically after each integration step
        void clearAccumulator();
        
        void addForce(const Vector3 &force);
};
