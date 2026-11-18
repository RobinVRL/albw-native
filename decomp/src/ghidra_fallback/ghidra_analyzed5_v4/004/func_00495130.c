#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_0068B134(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern float DAT_004951bc;
extern float DAT_004951c0;
extern undefined4 DAT_004951c4;

// USA 00495130 <- EU 00495108 (Ghidra, non-matching)
// GLOBAL DAT_004951bc float
// GLOBAL DAT_004951c0 float
// GLOBAL DAT_004951c4 undefined4

undefined4 func_00495130(int param_1,float *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define afStack_98 ((float *)(albw_frame + 0x8))
  #define afStack_68 ((float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define local_30 (*(float *)(albw_frame + 0x70))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x78))
  #define local_24 (*(float *)(albw_frame + 0x7c))
  #define fStack_20 (*(float *)(albw_frame + 0x80))
  #define local_1c (*(float *)(albw_frame + 0x84))
  if (*(char *)(param_2 + 0xd) == '\0') {
    local_2c = DAT_004951bc;
    local_34 = param_2[3];
    local_30 = param_2[4];
    func_0068B134(afStack_98,&local_34,param_2);
  }
  else {
    local_1c = DAT_004951bc;
    local_30 = DAT_004951c0;
    local_2c = DAT_004951c0;
    uStack_28 = DAT_004951c4;
    local_24 = param_2[4];
    fStack_20 = param_2[3];
    func_00491D78(afStack_98,&local_24,&local_30,param_2);
  }
  func_001157FC(afStack_68,(float *)(param_1 + 0x24),afStack_98);
  return (**(code **)(**(int **)(param_1 + 0x20) + 0x18))
            (*(int **)(param_1 + 0x20),afStack_68,param_2 + 5,param_2 + 9);
}

