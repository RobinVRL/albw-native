// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003616D4();
extern int func_005194D8(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0065CD54(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0045fc50;
extern float DAT_0045fc54;
extern int *DAT_0045fc58;
extern int DAT_0045fc78;
extern char s_SE_S_ITEM_SHORT_CUT_DECIDE_0045fc5c[];

// USA 0045FBD0 <- EU 0045FBA8 (Ghidra, non-matching)
// GLOBAL DAT_0045fc50 int *
// GLOBAL DAT_0045fc54 float
// GLOBAL DAT_0045fc58 int *
// GLOBAL DAT_0045fc78 int
// GLOBAL s_SE_S_ITEM_SHORT_CUT_DECIDE_0045fc5c string

undefined4 func_0045FBD0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar4 = *DAT_0045fc50;
  iVar3 = (int)*(char *)(*(int *)(param_1 + 0xac) + 0x88);
  func_003616D4(iVar4,(int)*(char *)(param_1 + 0x11a),iVar3);
  iVar2 = (int)*(char *)(param_1 + 0x119);
  if ((iVar2 == iVar3) && (iVar3 != -1)) {
    iVar2 = (int)*(char *)(param_1 + 0x118);
  }
  func_003616D4(iVar4,(int)*(char *)(param_1 + 0x11b),iVar2);
  func_002317C0((undefined2 *)(param_1 + 0x10c),DAT_0045fc54);
  piVar1 = DAT_0045fc58;
  func_0065CD54((undefined4 *)(*(int *)(*DAT_0045fc58 + 0x130) + 0xc),2);
  func_005194D8(*piVar1);
  local_1c = s_SE_S_ITEM_SHORT_CUT_DECIDE_0045fc5c;
  local_20 = DAT_0045fc78;
  return func_00533078(param_1,&local_20,0);
}

