#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WelcomePlugin : public WorldPlugin
    {
    public:
        WelcomePlugin() : WorldPlugin()
        {
            printf("Welcome to Iñigo's World!\n");
        }
        void Load(physics::WorldPtr, sdf::ElementPtr)
        {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WelcomePlugin)
}
