#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001E6A6C(int param_1,int *param_2);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_001c3220;
extern int *DAT_001c3224;
extern uint DAT_001c3228;
extern int *DAT_001c322c;

// USA 001C3118 <- EU 001C3118 (Ghidra, non-matching)
// GLOBAL DAT_001c3220 int *
// GLOBAL DAT_001c3224 int *
// GLOBAL DAT_001c3228 uint
// GLOBAL DAT_001c322c int *

void func_001C3118(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 ((int *)(albw_frame + 0x2c))
  if (*(char *)(param_1 + 0x476) == '\0') {
    return;
  }
  bVar4 = *DAT_001c3220 == 0;
  iVar1 = 0;
  if (!bVar4) {
    iVar1 = *(int *)(*DAT_001c3220 + 0xf74);
  }
  bVar5 = iVar1 == 0;
  if (!bVar4 && !bVar5) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if ((((bVar4 || bVar5) || iVar1 == 0) || (*(int *)(iVar1 + 0x154) != 0)) ||
     (iVar1 = func_001E6A6C(param_1,DAT_001c3224), iVar1 == 0)) {
    pfVar2 = (float *)func_00520FC0();
    local_38 = *pfVar2;
    fStack_34 = pfVar2[1];
    local_30 = pfVar2[2];
    func_00115C70(&local_20,&local_38,(float *)(param_1 + 0x3d0));
    local_2c = local_20;
    uStack_28 = uStack_1c;
    uStack_24 = uStack_18;
    local_14[0] = func_0068C690(&local_2c);
    local_14[0] = local_14[0] - *(int *)(param_1 + 1000);
    uVar3 = func_0058E2B8(local_14);
    if (uVar3 < DAT_001c3228) {
      iVar1 = func_001E6A6C(param_1,(int *)0x0);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x851) = 1;
      }
      goto LAB_001c3214;
    }
    iVar1 = func_001E6A6C(param_1,DAT_001c322c);
    if (iVar1 == 0) goto LAB_001c3214;
  }
  *(undefined1 *)(param_1 + 0x851) = 0;
LAB_001c3214:
  *(undefined1 *)(param_1 + 0x476) = 0;
  return;
}

