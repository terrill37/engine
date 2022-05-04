
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
        
        //mass functions
        void setMass(const real mass);
        bool hasFiniteMass() const;
        real getMass() const;
        void setInverseMass(const real inverseMass);
        real getInverseMass() const;

        //damping
        void setDamping(const real damping);
        real getDamping() const;

        //position
        void setPosition(const Vector3 &position);
        void setPosition(const real x, const real y, const real z);
        void getPosition(Vector3 *position) const;
        Vector3 getPosition() const;

        //velocity
        void setVelocity(const Vector3 &velocity);
        void setVelocity(const real x, const real y, const real z);
        void getVelocity(Vector3 *velocity) const;
        Vector3 getVelocity() const;

        //acceleration
        void setAcceleration(const Vector3 &acceleration);
        void setAcceleration(const real x, const real y, const real z);
        void getAcceleration(Vector3 *acceleration) const;
        Vector3 getAcceleration() const;

        void addForce(const Vector3 &force);
};
