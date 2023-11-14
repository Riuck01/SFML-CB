#pragma once
#include <vector>
#include "GameObject.hpp"

class Scene {
public:
	Scene() {};
	~Scene() {};

	virtual void render(std::vector<GameObject*>) {};
};