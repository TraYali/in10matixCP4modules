module;

export module car;

export import :engine;
export import :conversions;
export import :constants;

export class Car{
    private:
    Engine engine;

    public:
    Car(Engine engine);

    Engine &getEngine();
};