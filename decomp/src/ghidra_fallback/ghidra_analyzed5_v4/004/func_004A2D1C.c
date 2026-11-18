#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);

// USA 004A2D1C <- EU 004A2CF4 (Ghidra, non-matching)

void func_004A2D1C(int param_1,float *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  #define local_18 (*(float *)(albw_frame + 0x68))
  #define local_14 (*(float *)(albw_frame + 0x6c))
  #define local_10 (*(float *)(albw_frame + 0x70))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_18 = *(float *)(iVar1 + 0x3c);
    local_14 = local_18;
    local_10 = local_18;
    func_00491D78(afStack_78,&local_18,(float *)(iVar1 + 0x4c),(float *)(iVar1 + 0x40));
    func_001157FC(afStack_48,param_2,afStack_78);
    iVar1 = *(int *)(param_1 + 0x20);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      func_003E6DD4(iVar1,afStack_48);
    }
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return;
}

