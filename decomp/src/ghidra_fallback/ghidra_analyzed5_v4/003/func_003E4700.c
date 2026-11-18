#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00109038(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_003CDAC0(int *param_1);
extern int func_003E4838(int *param_1);
extern int func_003E4B34(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4);
extern int func_003E5130(uint param_1,int *param_2);
extern int func_003E5228(int *param_1);
extern int func_003E535C(undefined4 param_1,int param_2);
extern int func_003E5414(int param_1,int *param_2,int param_3);
extern int func_003E564C(int *param_1,int param_2,uint param_3,undefined4 param_4);
extern undefined *DAT_003e4808;
extern int DAT_003e480c;
extern uint *DAT_003e4810;
extern undefined4 *DAT_003e4814;

// USA 003E4700 <- EU 003E46E0 (Ghidra, non-matching)
// GLOBAL DAT_003e4808 undefined *
// GLOBAL DAT_003e480c int
// GLOBAL DAT_003e4810 uint *
// GLOBAL DAT_003e4814 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_64 */

undefined4 func_003E4700(uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_64 ((uint *)(albw_frame + 0xc))
  #define local_58 ((int *)(albw_frame + 0x18))
  #define local_48 (*(undefined1 *)(albw_frame + 0x28))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x30))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(uint *)(albw_frame + 0x40))
  #define local_20 (*(uint *)(albw_frame + 0x50))
  func_00100118((int)&local_38,DAT_003e4808,0x10,2);
  func_003E4838(&local_38);
  iVar2 = DAT_003e480c;
  func_003E4B34(param_1,extraout_r1,*(uint *)(DAT_003e480c + 0x90),*(uint *)(DAT_003e480c + 0x94));
  puVar3 = DAT_003e4810;
  DAT_003e4810[4] = local_30;
  puVar3[7] = local_20;
  puVar1 = DAT_003e4810;
  if (local_38 == iStack_34) {
    *(undefined1 *)(puVar3 + 1) = 0;
  }
  else {
    *(undefined1 *)(puVar3 + 1) = 1;
    puVar1 = DAT_003e4810;
  }
  func_003E5228((int *)puVar1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  objStack_64[1] = *(uint *)(iVar2 + 0x90);
  objStack_64[2] = *(uint *)(iVar2 + 0x94);
  func_00109038(param_1,2,(uint)DAT_003e4810,0x20,*DAT_003e4814,objStack_64[0],objStack_64[1],
                objStack_64[2]);
  objStack_64[0] = 0;
  func_003E5130(param_1,(int *)objStack_64);
  func_003E564C(local_58,objStack_64[0],*puVar3,3);
  func_003E5414(local_58[2],&local_38,(int)DAT_003e4810);
  func_003CDAC0(local_58);
  func_003E535C(DAT_003e4810,0x20);
  func_003CDAC0(local_58);
  if (local_44 != 0) {
    software_interrupt(0x23);
  }
  return 0;
}

