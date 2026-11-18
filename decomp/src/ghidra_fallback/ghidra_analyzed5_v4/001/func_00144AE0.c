#include "ghidra_types.h"

extern int func_004D00E4(int param_1,int param_2,int param_3,uint *param_4);
extern float DAT_00144c0c;

// USA 00144AE0 <- EU 00144AE0 (Ghidra, non-matching)
// GLOBAL DAT_00144c0c float

bool func_00144AE0(int param_1)

{
  undefined1 uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined1 *)(albw_frame + 0x8))
  #define local_17 (*(undefined1 *)(albw_frame + 0x9))
  #define local_16 (*(undefined1 *)(albw_frame + 0xa))
  #define local_15 (*(undefined1 *)(albw_frame + 0xb))
  uint uVar2;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x7c8);
  if (uVar3 == 0xff) {
    return true;
  }
  fVar8 = (float)VectorSignedToFloat(0xff - uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorFloatToUnsigned(fVar8 * DAT_00144c0c,3);
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  else if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  bVar6 = uVar3 == 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar7 + uVar3 & 0xff;
    uVar1 = (undefined1)(uVar7 + uVar3);
    if ((uVar2 < 0xff) && (uVar3 <= uVar2)) {
LAB_00144ba0:
      *(undefined1 *)(param_1 + 0x7c8) = uVar1;
      goto LAB_00144ba4;
    }
  }
  else {
    if (uVar3 < 0x100) goto LAB_00144ba4;
    uVar2 = uVar3 - uVar7 & 0xff;
    uVar1 = (undefined1)(uVar3 - uVar7);
    if ((0xff < uVar2) && (uVar2 <= uVar3)) goto LAB_00144ba0;
  }
  bVar6 = true;
  *(undefined1 *)(param_1 + 0x7c8) = 0xff;
LAB_00144ba4:
  uVar1 = *(undefined1 *)(param_1 + 0x7c8);
  (*(undefined4 *)&local_18) = CONCAT13(0xff,CONCAT12(uVar1,CONCAT11(uVar1,uVar1)));
  iVar5 = *(int *)(param_1 + 0x78c);
  if ((iVar5 != 0) && (iVar4 = 0, 0 < *(int *)(*(int *)(iVar5 + 0x20) + 4))) {
    do {
      func_004D00E4(iVar5,iVar4,1,(uint *)&local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)(iVar5 + 0x20) + 4));
  }
  return bVar6;
}

