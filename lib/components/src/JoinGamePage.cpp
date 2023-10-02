#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Client.h"
#include "ftxui/component/captured_mouse.hpp"  // for ftxui
#include "ftxui/component/component.hpp"  
#include "ftxui/component/loop.hpp"
#include "ftxui/component/component_base.hpp"      // for ComponentBase
#include "ftxui/component/screen_interactive.hpp"  // for ScreenInteractive
#include "ftxui/dom/elements.hpp" 
#include "JoinGamePage.h"

using namespace ftxui;

namespace Pages{
Component JoinGame(bool &showLanding, bool &showJoin, bool &showCreate, networking::Client &client){
    auto page = Window({.title = "Join Game",.width = 80, .height = 60,});
    return page;
}
}