#pragma once

#include "BaseState.h"
#include "Button.h"
#include "DropdownButton.h"
#include "ToggleButton.h"
#include <SFML/Graphics.hpp>

#include <vector>
#include <string>
#include <memory>

class StateMenu : public BaseState {

    static const int PADDING_SIZE = 30;
    static const int WINDOW_WIDTH = 650;
    static const int WINDOW_HEIGHT = 825;

    public:
        StateMenu(Global* context);
        void processInput(const sf::Event&) final;
        void update() final;
        void draw() const final;
        void showInstructions();

    private:
        sf::Texture backgroundTexture;      // tło menu
        sf::Font instructionsFont;

        ToggleButton modeButton;
        Button multiplButton;
        Button easyButton;
        Button mediumButton;
        Button hardButton;
        Button instructionsButton;
        Button exitButton;

};