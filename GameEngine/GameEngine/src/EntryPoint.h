//
//  EntryPoint.h
//  gameEngineLib
//
//  Created by Michalis Kaseris on 18/08/2019.
//  Copyright © 2019 newbieSoft. All rights reserved.
//

#ifndef EntryPoint_h
#define EntryPoint_h

#ifdef __APPLE__

extern Newb::Application* Newb::createApplication();

int main(int argc, char** argv)
{
    Newb::Log::init();
    NEWB_CORE_WARN("Initialised logger");
    int a = 3;
    NEWB_CLIENT_INFO("Hello, Var = {0}", a);
    
    printf( "GameEngine started\n" );
    auto app = Newb::createApplication();
    app->run();
    delete app;
}


#endif

#endif /* EntryPoint_h */
