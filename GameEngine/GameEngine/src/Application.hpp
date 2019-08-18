//
//  Application.hpp
//  gameEngineLib
//
//  Created by Michalis Kaseris on 18/08/2019.
//  Copyright © 2019 newbieSoft. All rights reserved.
//

#ifndef Application_hpp
#define Application_hpp
#include "core.h"
namespace Newb
{
class NEWB_ENGINE_API Application
{
public:
    Application();
    virtual ~Application();
    
    void run();
private:
    
};
    // To be defined in client-side
    Application* createApplication();
}
#endif /* Application_hpp */
