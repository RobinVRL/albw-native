#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern uint DAT_002caea0;
extern float DAT_002caea4;
extern int *DAT_002caea8;
extern char s_Twinkle_002cae98[];

// USA 002CAD88 <- EU 002CAD64 (Ghidra, non-matching)
// GLOBAL DAT_002caea0 uint
// GLOBAL DAT_002caea4 float
// GLOBAL DAT_002caea8 int *
// GLOBAL s_Twinkle_002cae98 string

/* WARNING: Variable defined which should be unmapped: objStack_20 */

void func_002CAD88(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  float in_s0;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x438) == '\0') {
    *(undefined1 *)(param_1 + 0x438) = 1;
    puVar3 = (uint *)(param_1 + 0x42c);
    if (*(int *)(param_1 + 0x344) == 0) {
      *puVar3 = 0;
      *(undefined4 *)(param_1 + 0x430) = 0;
    }
    else {
      uVar2 = *puVar3;
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0x430))) {
        func_00110848(uVar2);
      }
      func_004A1B9C((int *)objStack_20,*(int *)(param_1 + 0x344),(uint *)s_Twinkle_002cae98);
      *puVar3 = objStack_20[0];
      *(uint *)(param_1 + 0x430) = objStack_20[1];
    }
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0x418));
  objStack_20[0] = 0;
  objStack_20[1] = 0;
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x410),param_1 + 0x41c,DAT_002caea0,0,0);
  if (*(int *)(param_1 + 0x434) == 0) {
    if (**(int **)(param_1 + 0x418) != 0) {
      cVar1 = *(char *)((int)*(int **)(param_1 + 0x418) + 0x21);
      if (cVar1 == '\x05') {
        fVar4 = DAT_002caea4;
        func_002917A4(*DAT_002caea8,param_1 + 0x3d0,0,DAT_002caea4);
        *(undefined4 *)(param_1 + 0x434) = 0x16;
        return;
      }
      in_s0 = DAT_002caea4;
      if (cVar1 == '\x0e') {
        func_00291FE0(*DAT_002caea8,param_1 + 0x3d0,DAT_002caea4);
        *(undefined4 *)(param_1 + 0x434) = 0x16;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + -1;
  }
  return;
}

