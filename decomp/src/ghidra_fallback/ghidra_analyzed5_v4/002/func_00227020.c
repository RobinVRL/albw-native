#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_005569C8(int param_1);
extern int *DAT_002270b4;
extern int DAT_002270d4;
extern int *DAT_002270d8;
extern char s_Attack_002270dc[];
extern char s_SE_Togegoma_REFLECT_PLAYER_002270b8[];

// USA 00227020 <- EU 00227020 (Ghidra, non-matching)
// GLOBAL DAT_002270b4 int *
// GLOBAL DAT_002270d4 int
// GLOBAL DAT_002270d8 int *
// GLOBAL s_Attack_002270dc string
// GLOBAL s_SE_Togegoma_REFLECT_PLAYER_002270b8 string

undefined4 func_00227020(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  uVar3 = 0;
  bVar1 = func_00521098(param_1,(int *)(param_2 + 0x28));
  if (bVar1) {
    cVar2 = func_005569C8(*DAT_002270b4);
    bVar1 = !(bool)cVar2;
    if (bVar1) {
      cVar2 = *(char *)(param_1 + 0x745);
    }
    if (bVar1 && cVar2 == '\0') {
      local_1c = s_SE_Togegoma_REFLECT_PLAYER_002270b8;
      local_20 = DAT_002270d4;
      func_004EA104(*DAT_002270d8,&local_20,0);
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),(uint *)s_Attack_002270dc);
      }
      *(undefined1 *)(param_1 + 0x746) = 0x23;
      *(undefined1 *)(param_1 + 0x745) = 5;
    }
    uVar3 = 1;
  }
  return uVar3;
}

