#ifndef MARIO_ACTIONS_AIRBORNE_H
#define MARIO_ACTIONS_AIRBORNE_H

#include <PR/ultratypes.h>

#include "types.h"

s32 mario_execute_airborne_action(struct MarioState *m);
s32 act_explode_death(struct MarioState * m);

#endif // MARIO_ACTIONS_AIRBORNE_H
