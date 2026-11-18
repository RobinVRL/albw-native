#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int *DAT_0031581c;
extern uint *DAT_00315820;

// USA 00315760 <- EU 0031573C (Ghidra, non-matching)
// GLOBAL DAT_0031581c int *
// GLOBAL DAT_00315820 uint *

void func_00315760(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define afStack_50 ((float *)(albw_frame + 0x10))
  #define local_20 (*(uint *)(albw_frame + 0x40))
  #define local_1c (*(int *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  if (*(char *)(param_1 + 0x518) == '\0') {
    local_20 = 0;
    local_1c = *(int *)(param_1 + 1000) + *DAT_0031581c;
    uStack_18 = 0;
    func_0049216C(afStack_50,&local_20,(float *)(param_2 + 0x10));
    puVar1 = DAT_00315820;
    piVar3 = (int *)(param_1 + 0x510);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x514) = 0;
    }
    else {
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x514))) {
        func_00110848(iVar2);
      }
      func_004A1B9C(&local_58,*(int *)(param_1 + 0x344),puVar1);
      *piVar3 = local_58;
      *(undefined4 *)(param_1 + 0x514) = uStack_54;
    }
    iVar2 = *(int *)(param_1 + 0x510);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x514))) {
      func_004A2D1C(iVar2,afStack_50);
    }
    *(undefined1 *)(param_1 + 0x518) = 1;
  }
  return;
}

