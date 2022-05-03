#include <vector>
#include "particle.h"


class ParticleForceGenerator{
    public:
        virtual void updateForce(Particle *particle, real duration) = 0;
};

namespace vec{
    class ParticleForceRegistry{
        protected:
            struct ParticleForceRegistration{
                Particle *particle;
                ParticleForceGenerator *fg;
            };
            typedef std::vector<ParticleForceRegistration> Registry;
            Registry registrations;
        
        public:
            void add(Particle* particle, ParticleForceGenerator *fg);
            void remove(Particle* particle, ParticleForceGenerator *fg);

            void clear();

            void updateForces(real duration);
    };

    class ParticleGravity :public ParticleForceGenerator{
        Vector3 gravity;
        
        public: 
            ParticleGravity(const Vector3 &gravity);
            virtual void updateForce(Particle *particle, real duration);
    };
}

