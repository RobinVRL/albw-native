#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern uint DAT_0020dd34;
extern int DAT_0020dd38;

// USA 0020DBB8 <- EU 0020DBB8 (Ghidra, non-matching)
// GLOBAL DAT_0020dd34 uint
// GLOBAL DAT_0020dd38 int

undefined4 func_0020DBB8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  iVar5 = DAT_0020dd38;
  uVar4 = DAT_0020dd34;
  if (*(uint *)(param_1 + 0xbb0) < *(uint *)(param_1 + 0xbb4)) {
    *(undefined1 *)(param_1 + 0xb94) = 0xff;
    return func_0065D630((undefined4 *)(param_1 + 0x8bc),10);
  }
  uVar7 = *(uint *)(param_1 + 0x960);
  uVar8 = 0;
  uVar9 = 0;
  uVar6 = 0;
  if (uVar7 != 0) {
    do {
      func_00115C70(&local_34,(float *)(param_1 + uVar6 * 0xc + 0x900),(float *)(param_1 + 0x3d0));
      local_44 = local_34;
      uStack_40 = uStack_30;
      local_3c = fStack_2c;
      iVar1 = func_0068C690(&local_44);
      if ((int)*(char *)(param_1 + 0xb94) != uVar6) {
        local_38 = iVar1 - *(int *)(param_1 + 1000);
        uVar2 = func_0058E2B8(&local_38);
        if ((uVar2 < uVar4) && (iVar5 <= (int)ALBW_AS_U32(SQRT(local_44 * local_44 + local_3c * local_3c)))) {
          uVar8 = uVar8 | 1 << (uVar6 & 0xff);
          uVar9 = uVar9 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
    if (uVar9 != 0) {
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      iVar5 = 0;
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          if ((uVar8 >> (uVar6 & 0xff) & 1) != 0) {
            if ((int)((ulonglong)uVar9 * (ulonglong)uVar4 >> 0x20) == iVar5) {
              *(char *)(param_1 + 0xb94) = (char)uVar6;
              break;
            }
            iVar5 = iVar5 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      goto LAB_0020dd20;
    }
  }
  *(undefined1 *)(param_1 + 0xb94) = 0;
LAB_0020dd20:
  return func_0065D630((undefined4 *)(param_1 + 0x8bc),9);
}

