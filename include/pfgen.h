#include <vector>
#include "particle.h"

namespace vec{
    class ParticleForceGenerator{
    public:
        virtual void updateForce(Particle *particle, real duration) = 0;
    };   
    
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

    class ParticleDrag : public ParticleForceGenerator{
        real k1;
        real k2;

        public:
            ParticleDrag(real k1, real k2);

            virtual void updateForce(Particle *particle, real duration);
    };


}

