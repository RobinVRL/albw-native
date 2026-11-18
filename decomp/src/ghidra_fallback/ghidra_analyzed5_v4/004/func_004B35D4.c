#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b3768;
extern undefined4 DAT_004b376c;
extern undefined4 DAT_004b3770;
extern undefined4 DAT_004b3774;
extern undefined4 *DAT_004b3778;
extern undefined4 DAT_004b377c;

// USA 004B35D4 <- EU 004B35AC (Ghidra, non-matching)
// GLOBAL DAT_004b3768 undefined4
// GLOBAL DAT_004b376c undefined4
// GLOBAL DAT_004b3770 undefined4
// GLOBAL DAT_004b3774 undefined4
// GLOBAL DAT_004b3778 undefined4 *
// GLOBAL DAT_004b377c undefined4

undefined4 func_004B35D4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define aiStack_78 ((int *)(albw_frame + 0x18))
  #define auStack_6c ((undefined1 *)(albw_frame + 0x24))
  #define aiStack_4c ((int *)(albw_frame + 0x44))
  #define auStack_40 ((undefined1 *)(albw_frame + 0x50))
  puVar1 = func_00689A2C(aiStack_4c,auStack_40,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b376c;
  func_00688CA0(param_3,aiStack_4c);
  uVar5 = 0;
  if (*(int *)(param_2 + 0x26c) < 1) {
    return 0;
  }
  do {
    piVar4 = (int *)(param_2 + 0x1c4) + uVar5 * 7;
    do {
      iVar2 = func_00691884(aiStack_4c,piVar4);
      if (iVar2 != 0) {
        if ((int)uVar5 < 0) {
          return 0;
        }
        puVar1 = func_00689A2C(aiStack_78,auStack_6c,0x20);
        *(undefined1 *)puVar1[1] = 0;
        *puVar1 = DAT_004b3774;
        func_00688CA0(param_3,aiStack_78);
        func_00687AF0(&local_84,aiStack_78);
        func_00688CA0(param_3,aiStack_78);
        func_00687AF0(&fStack_80,aiStack_78);
        func_00688CA0(param_3,aiStack_78);
        func_00687AF0(&fStack_7c,aiStack_78);
        puVar1 = DAT_004b3778;
        if (*(int *)(param_1 + 0x20) == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = func_0010983C(*DAT_004b3778,*(int *)(param_1 + 0x20));
        }
        puVar3 = (undefined4 *)func_0010BAB4(0x1c);
        if (puVar3 != (undefined4 *)0x0) {
          puVar3[1] = *(undefined4 *)(param_2 + 0x19c34);
          puVar3[2] = 0x20;
          *puVar3 = DAT_004b377c;
          puVar3[3] = uVar5;
          puVar3[4] = ALBW_AS_U32(local_84);
          puVar3[5] = ALBW_AS_U32(fStack_80);
          puVar3[6] = ALBW_AS_U32(fStack_7c);
        }
        func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
        if (iVar2 == 1) {
          return 0;
        }
        return func_0010983C(*puVar1,iVar2);
      }
      uVar5 = uVar5 + 1;
      if (*(int *)(param_2 + 0x26c) <= (int)uVar5) {
        return 0;
      }
      piVar4 = (int *)(param_2 + 0x1c4);
    } while (5 < uVar5);
  } while( true );
}

