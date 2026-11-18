#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036B76C(int param_1);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int DAT_0036c1b0;
extern int *DAT_0036c1b4;
extern undefined *DAT_0036c1b8;
extern int *DAT_0036c1bc;

// USA 0036C0B0 <- EU 0036C08C (Ghidra, non-matching)
// GLOBAL DAT_0036c1b0 int
// GLOBAL DAT_0036c1b4 int *
// GLOBAL DAT_0036c1b8 undefined *
// GLOBAL DAT_0036c1bc int *

undefined4 func_0036C0B0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define afStack_1c ((float *)(albw_frame + 0x34))
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(DAT_0036c1b0 + (*(uint *)(param_1 + 0x14) & 0xff) * 0x2c);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  uStack_38 = puVar2[4];
  uStack_34 = puVar2[5];
  uStack_30 = puVar2[6];
  fStack_2c = ALBW_AS_F32(puVar2[7]);
  local_20 = puVar2[10];
  local_28 = puVar2[8];
  uStack_24 = puVar2[9];
  if (-1 < *(int *)(param_1 + 0x20)) {
    uVar1 = (uint)local_20 >> 0x10;
    local_20 = CONCAT22((short)uVar1,(short)*(int *)(param_1 + 0x20));
  }
  func_00115C54(afStack_1c,(float *)(*(int *)(param_1 + 4) + 0x3d0),&fStack_2c);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0;
  *(int *)(*(int *)(param_1 + 0xc) + 0x18) = param_1 + 0xb4;
  if ((*(char *)(param_1 + 0xf4) == '\x03') &&
     (puVar2 = *(undefined4 **)(param_1 + 0x2c), puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(puVar2,&local_48,afStack_1c);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))
                    (*(int **)(param_1 + 0xc),afStack_1c,&local_48,(int)*(char *)(param_1 + 0xfa));
  uVar4 = 0;
  if (iVar3 != 0) {
    func_0036B76C(param_1);
    *(undefined1 *)(param_1 + 0xfa) = 0;
    if (*(char *)(param_1 + 0xf8) != '\0') {
      func_0052FD7C(*DAT_0036c1b4 + 0x3dbbc,DAT_0036c1b8,0);
      if (*DAT_0036c1bc != 0) {
        *(undefined1 *)(*DAT_0036c1bc + 0xa1) = 1;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

