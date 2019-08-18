//
//  EditorApp.cpp
//  Editor
//
//  Created by Michalis Kaseris on 18/08/2019.
//  Copyright © 2019 newbieSoft. All rights reserved.
//

#include <stdio.h>
#include <GameEngine.h>

class Editor : public Newb::Application
{
public:
    
    Editor()
    {
        
    }
    
    ~Editor()
    {
        
    }

};

Newb::Application* Newb::createApplication()
{
    return new Editor();
}
