#include "Copter.h"

#if MODE_NEW_MODE_ENABLED == ENABLED


bool Copter::ModeNewMode::init(bool ignore_checks)
{
    AP_Notify::events.mission_complete = 1;
    return true;
}

void Copter::ModeNewMode::run()
{
    AP_Notify::events.mission_complete = 1;
    return;
}

#endif
