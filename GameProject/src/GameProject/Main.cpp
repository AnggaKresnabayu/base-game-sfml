#include "GameProjectPCH.hpp"

#include <GameProject/Game.hpp>
#include <GameProject/Core/Pointers.hpp>

using namespace gameproject;

// Note:
// This is definition of a `GameInstance` declared inside "GameProject/GameInstance.hpp"
// Changing it to a global, non-dynamic object will cause crash.
UniquePtr<Game> GameInstance;

int main()
{
	GameInstance = std::make_unique<Game>();
	GameInstance->run();
}

