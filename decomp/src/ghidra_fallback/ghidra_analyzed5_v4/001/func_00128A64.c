#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00521078(int param_1);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00128b74;
extern float DAT_00128b78;
extern int *DAT_00128b7c;
extern int DAT_00128b80;
extern char s_SE_Chasupa_V_FLY_START_00128b84[];
extern char s_SE_Keease_V_FLY_START_00128b9c[];

// USA 00128A64 <- EU 00128A64 (Ghidra, non-matching)
// GLOBAL DAT_00128b74 float
// GLOBAL DAT_00128b78 float
// GLOBAL DAT_00128b7c int *
// GLOBAL DAT_00128b80 int
// GLOBAL s_SE_Chasupa_V_FLY_START_00128b84 string
// GLOBAL s_SE_Keease_V_FLY_START_00128b9c string

undefined4 func_00128A64(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  cVar1 = func_00521078((int)param_1);
  bVar3 = !(bool)cVar1;
  if (bVar3) {
    cVar1 = (char)param_1[0x24a];
  }
  if (!bVar3 || cVar1 != '\0') {
    if ((uint)param_1[0x238] < (uint)param_1[0x239]) {
      param_1[0x238] = param_1[0x238] + 1;
      return 0;
    }
    if (((*(short *)((int)param_1 + 0x36) == 0) || (bVar3 = func_00588BF0((int)param_1,0), !bVar3))
       && ((*(short *)((int)param_1 + 0x36) != 0 ||
           (iVar2 = func_005211F4((int)param_1,DAT_00128b78,DAT_00128b74), iVar2 == 0)))) {
      bVar3 = *(short *)((int)param_1 + 0x36) == 0;
      cVar1 = '\0';
      if (!bVar3) {
        cVar1 = (char)param_1[0x248];
      }
      if (bVar3 || cVar1 == '\0') {
        return 0;
      }
    }
  }
  func_006568D8(param_1 + 0x22f,2);
  iVar2 = func_00588BE4((int)param_1);
  local_18 = DAT_00128b80;
  if (iVar2 == *DAT_00128b7c) {
    local_14 = s_SE_Chasupa_V_FLY_START_00128b84;
    return func_00150A84(param_1,&local_18,0);
  }
  local_14 = s_SE_Keease_V_FLY_START_00128b9c;
  return func_00150A84(param_1,&local_18,0);
}

