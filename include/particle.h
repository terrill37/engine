
class Particle{
    public:
        Vector3 position;
        Vector3 velocity;
        Vector3 acceleration;
        
        real damping;
        real inverseMass;
        
        void integrate(real duration);
};
