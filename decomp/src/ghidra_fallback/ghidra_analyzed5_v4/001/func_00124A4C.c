#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004F4A68();
extern float DAT_00124c34;
extern int DAT_00124c38;
extern int DAT_00124c3c;

// USA 00124A4C <- EU 00124A4C (Ghidra, non-matching)
// GLOBAL DAT_00124c34 float
// GLOBAL DAT_00124c38 int
// GLOBAL DAT_00124c3c int

undefined4 func_00124A4C(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  if ((*(char *)(param_1 + 0x8c0) == '\x05' || *(char *)(param_1 + 0x8c0) == '\x04') &&
     ((uint)ALBW_AS_U32(DAT_00124c34) <
      (uint)ALBW_AS_U32((*(float *)(param_1 + 0x374) * *(float *)(param_2 + 4) +
             *(float *)(param_1 + 0x378) * *(float *)(param_2 + 8) +
            *(float *)(param_1 + 0x37c) * *(float *)(param_2 + 0xc))))) {
    if ((int)*(char *)(DAT_00124c38 + param_1) == *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
      *(undefined1 *)(param_1 + 0x958) = 1;
    }
    else {
      *(float *)(param_1 + 0x930) = *(float *)(param_1 + 0x374);
      *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x378);
      *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x37c);
      *(byte *)(param_1 + 0x93c) = (byte)((uint)(*(int *)(param_1 + 0x8ec) + 0x20000000) >> 0x1e);
    }
    iVar2 = (int)*(char *)(param_1 + 0x8c0);
    if (iVar2 != 3) {
      if (iVar2 != -1) {
        iVar6 = *(int *)(param_1 + 0x8dc);
        pcVar5 = *(code **)(iVar6 + iVar2 * 8);
        if ((pcVar5 != (code *)0x0) ||
           (uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
          uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4);
          piVar4 = (int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar3 >> 1));
          if ((uVar3 & 1) != 0) {
            pcVar5 = *(code **)(pcVar5 + *piVar4);
          }
          (*pcVar5)(piVar4,3);
        }
      }
      uVar1 = *(undefined1 *)(param_1 + 0x8c0);
      *(undefined1 *)(param_1 + 0x8c0) = 3;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      *(undefined1 *)(param_1 + 0x8c1) = uVar1;
      if (*(int *)(param_1 + 0x8cc) != 0) {
        if (*(uint *)(param_1 + 0x8c4) < 4) {
          piVar4 = *(int **)(param_1 + 0x8c8);
        }
        else {
          piVar4 = (int *)(*(int *)(param_1 + 0x8c8) + 0x6c);
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        local_24 = piVar4[1];
        local_28 = DAT_00124c3c;
        func_0010BEB4(*(int *)(param_1 + 0x8cc),&local_28);
      }
      iVar6 = (int)*(char *)(param_1 + 0x8c0);
      iVar2 = *(int *)(param_1 + 0x8d4);
      pcVar5 = *(code **)(iVar2 + iVar6 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar3 = *(uint *)(iVar2 + iVar6 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
        uVar3 = *(uint *)(iVar2 + iVar6 * 8 + 4);
        if ((uVar3 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar3 >> 1)));
        }
        (*pcVar5)((int)(*(int *)(param_1 + 0x8d0)) + ((int)uVar3 >> 1));
      }
    }
  }
  return func_004F4A68(param_1,param_2);
}

