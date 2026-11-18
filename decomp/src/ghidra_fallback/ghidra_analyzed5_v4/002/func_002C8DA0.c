#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0016BAF8(int param_1,int param_2,int param_3);
extern int *DAT_002c8de0;
extern int DAT_002c8dfc;
extern char s_SE_SwitchCandle_BURNING_002c8de4[];

// USA 002C8DA0 <- EU 002C8D7C (Ghidra, non-matching)
// GLOBAL DAT_002c8de0 int *
// GLOBAL DAT_002c8dfc int
// GLOBAL s_SE_SwitchCandle_BURNING_002c8de4 string

undefined4 func_002C8DA0(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x478) != '\0') {
    func_0016BAF8(*DAT_002c8de0,1,(int)*(short *)(param_1 + 0x54));
    local_14 = s_SE_SwitchCandle_BURNING_002c8de4;
    local_18 = DAT_002c8dfc;
    func_001507D8(param_1,&local_18,0);
  }
  return func_0014E138(param_1,param_2);
}

