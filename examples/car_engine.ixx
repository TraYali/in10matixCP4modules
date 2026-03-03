export module car:engine;

export class Engine {
    private:
    float volume;

    public:
    Engine();
    Engine(float volume);

    float getPower();
    float getHorsePower();
};