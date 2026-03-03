module car;

import :engine;
import :conversions;
import :constants;

Car::Car(Engine engine) { this->engine = engine; }

Engine& Car::getEngine() { return this->engine; }

Engine::Engine() { this->volume = 0; };
Engine::Engine(float volume) { this->volume = volume; }

float Engine::getPower() { return this->volume * 1000; }

float Engine::getHorsePower() { return Conversions::wToHp(this->getPower()); }

float Conversions::wToHp(float w) { return w * Constants::wToHp; }