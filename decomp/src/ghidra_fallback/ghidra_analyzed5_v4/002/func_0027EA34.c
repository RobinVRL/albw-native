#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0027E7E4(int param_1,char param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int DAT_0027eb84;
extern int DAT_0027eb88;
extern char s_SE_BlockColor_MOVE_0027ebb4[];
extern char s_SE_SwitchColor_BLUE_ON_0027eb9c[];
extern char s_SE_SwitchColor_RED_ON_0027ebd4[];
extern char s_SwitchBlueOn_0027eb8c[];
extern char s_SwitchRedOn_0027ebc8[];

// USA 0027EA34 <- EU 0027EA5C (Ghidra, non-matching)
// GLOBAL DAT_0027eb84 int
// GLOBAL DAT_0027eb88 int
// GLOBAL s_SE_BlockColor_MOVE_0027ebb4 string
// GLOBAL s_SE_SwitchColor_BLUE_ON_0027eb9c string
// GLOBAL s_SE_SwitchColor_RED_ON_0027ebd4 string
// GLOBAL s_SwitchBlueOn_0027eb8c string
// GLOBAL s_SwitchRedOn_0027ebc8 string

undefined4 func_0027EA34(int *param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_0027eb84;
  if ((uint)param_1[0x104] <= (uint)param_1[0x103]) {
    param_1[0x104] = 0xf;
    param_1[0x105] = iVar1;
    param_1[0x103] = 0;
    iVar1 = DAT_0027eb88;
    if ((char)param_1[0x106] == '\0') {
      func_0027E7E4((int)param_1,'\x01');
      if (param_1[0xd1] != 0) {
        func_004A1B9C(&local_18,param_1[0xd1],(uint *)s_SwitchRedOn_0027ebc8);
      }
      if (param_2 != 0) {
        local_14 = s_SE_SwitchColor_RED_ON_0027ebd4;
        local_18 = iVar1;
        func_00150A84(param_1,&local_18,0);
        local_14 = s_SE_BlockColor_MOVE_0027ebb4;
        local_18 = iVar1;
        return func_00150A84(param_1,&local_18,0);
      }
    }
    else if ((char)param_1[0x106] == '\x01') {
      func_0027E7E4((int)param_1,'\0');
      if (param_1[0xd1] != 0) {
        func_004A1B9C(&local_18,param_1[0xd1],(uint *)s_SwitchBlueOn_0027eb8c);
      }
      if (param_2 != 0) {
        local_14 = s_SE_SwitchColor_BLUE_ON_0027eb9c;
        local_18 = iVar1;
        func_00150A84(param_1,&local_18,0);
        local_14 = s_SE_BlockColor_MOVE_0027ebb4;
        local_18 = iVar1;
        func_00150A84(param_1,&local_18,0);
      }
    }
  }
  return 0;
}

