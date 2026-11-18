#include "ghidra_types.h"

extern int *DAT_00298fe4;
extern int DAT_00298fe8;
extern float DAT_00298fec;

// GLOBAL DAT_00298fe4 int *
// GLOBAL DAT_00298fe8 int
// GLOBAL DAT_00298fec float
// USA 00298D9C <- EU 00298E40 (Ghidra, function missing from the decomp table)

void func_00298D9C(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  if (*(char *)(param_1 + 0x34a) != '\0') {
    iVar1 = *(int *)(*DAT_00298fe4 + 0x18);
    uStack_48 = *(undefined4 *)(iVar1 + 0x1bc);
    uStack_40 = *(undefined4 *)(iVar1 + 0x1c4);
    fStack_44 = *(float *)(iVar1 + 0x1c0) + *(float *)(param_1 + 0x48);
    puVar2 = (undefined4 *)(DAT_00298fe8 + (uint)*(byte *)(param_1 + 0x35c) * 0x2c);
    uStack_3c = *puVar2;
    uStack_38 = puVar2[1];
    fStack_30 = ALBW_AS_F32(puVar2[3]);
    fStack_2c = ALBW_AS_F32(puVar2[4]);
    uStack_28 = puVar2[5];
    iStack_24 = puVar2[6];
    uStack_20 = puVar2[7];
    uStack_14 = puVar2[10];
    uStack_1c = puVar2[8];
    uStack_18 = puVar2[9];
    uStack_34 = *(undefined4 *)(iVar1 + 0x1a8);
    if (*(short *)(param_1 + 0x2e) != 0) {
      uStack_14 = 0;
    }
    if (iStack_24 != 0) {
      fStack_30 = fStack_30 + *(float *)(iVar1 + 0xe4);
      if ((int)ALBW_AS_U32(fStack_30) < 0x3f800001) {
        fStack_30 = DAT_00298fec;
      }
      fStack_2c = fStack_2c + *(float *)(iVar1 + 0x198);
      if ((int)ALBW_AS_U32(fStack_2c) < 0x3f800001) {
        fStack_2c = DAT_00298fec;
      }
      iStack_24 = 0;
    }
    if (*(char *)(param_1 + 0x34b) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x358) + 0x34))
                        (*(int **)(param_1 + 0x358),&uStack_48,&uStack_3c,0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x35f) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x360) = uStack_48;
      *(float *)(param_1 + 0x364) = fStack_44;
      *(undefined4 *)(param_1 + 0x368) = uStack_40;
      *(undefined4 *)(param_1 + 0x36c) = uStack_3c;
      *(undefined4 *)(param_1 + 0x370) = uStack_38;
      *(undefined4 *)(param_1 + 0x374) = uStack_34;
      *(float *)(param_1 + 0x378) = fStack_30;
      *(float *)(param_1 + 0x37c) = fStack_2c;
      *(undefined4 *)(param_1 + 0x380) = uStack_28;
      *(int *)(param_1 + 900) = iStack_24;
      *(undefined4 *)(param_1 + 0x388) = uStack_20;
      *(undefined4 *)(param_1 + 0x38c) = uStack_1c;
      *(undefined4 *)(param_1 + 0x390) = uStack_18;
      *(undefined2 *)(param_1 + 0x394) = (undefined2)uStack_14;
      *(undefined2 *)(param_1 + 0x396) = (*(undefined2 *)((char *)&uStack_14 + 2));
      *(undefined1 *)(param_1 + 0x35d) = 1;
    }
    *(undefined1 *)(param_1 + 0x34a) = 0;
  }
  return;
}

