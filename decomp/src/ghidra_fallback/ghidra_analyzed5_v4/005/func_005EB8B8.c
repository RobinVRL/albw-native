#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb904;
extern undefined4 *DAT_005eb908;
extern undefined4 DAT_005eb91c;
extern undefined4 DAT_005eb920;
extern undefined4 DAT_005eb924;
extern undefined4 *DAT_005eb928;
extern undefined4 DAT_005eb944;
extern char s_AudioFxSocket_005eb90c[];
extern char s_AuxBus_A_005eb92c[];
extern char s_AuxBus_B_005eb938[];

// USA 005EB8B8 <- EU 005EB890 (Ghidra, non-matching)
// GLOBAL DAT_005eb904 undefined4 *
// GLOBAL DAT_005eb908 undefined4 *
// GLOBAL DAT_005eb91c undefined4
// GLOBAL DAT_005eb920 undefined4
// GLOBAL DAT_005eb924 undefined4
// GLOBAL DAT_005eb928 undefined4 *
// GLOBAL DAT_005eb944 undefined4
// GLOBAL s_AudioFxSocket_005eb90c string
// GLOBAL s_AuxBus_A_005eb92c string
// GLOBAL s_AuxBus_B_005eb938 string

undefined4 func_005EB8B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eb904;
  *DAT_005eb904 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005eb91c;
  puVar1 = DAT_005eb908;
  *DAT_005eb908 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_AudioFxSocket_005eb90c;
  puVar1[2] = uVar2;
  puVar1 = DAT_005eb928;
  DAT_005eb928[1] = s_AuxBus_A_005eb92c;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_AuxBus_B_005eb938;
  return func_005902C0(0);
}

