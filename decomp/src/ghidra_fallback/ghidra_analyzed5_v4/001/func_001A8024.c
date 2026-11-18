#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern float func_001A786C(int param_1,int param_2);
extern int func_001A7B50(int param_1,int *param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern float func_005287F4(int param_1,float *param_2,uint *param_3,uint *param_4);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);
extern int DAT_001a80f0;
extern char s_SE_Kodongo_FRAME_001a80dc[];

// USA 001A8024 <- EU 001A8024 (Ghidra, non-matching)
// GLOBAL DAT_001a80f0 int
// GLOBAL s_SE_Kodongo_FRAME_001a80dc string

undefined4 func_001A8024(int param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 ((uint *)(albw_frame + 0x10))
  fVar1 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar1);
  func_001A7B50(param_1,(int *)(param_1 + 0x960));
  func_001A786C(param_1,0);
  local_10[0] = 0;
  if (*(char *)(param_1 + 0x937) != '\0') {
    local_10[0] = *(uint *)(param_1 + 0x91c);
  }
  fVar1 = func_005287F4(param_1,(float *)0x0,(uint *)0x0,local_10);
  *(float *)(param_1 + 0x95c) = fVar1;
  if ((*(int *)(param_1 + 0x92c) < *(int *)(param_1 + 0x8bc)) ||
     (*(char *)(*(int *)(param_1 + 0x8e4) + 0x61) == '\0')) {
    func_0065A840((undefined4 *)(param_1 + 0x8bc),6);
  }
  local_14 = s_SE_Kodongo_FRAME_001a80dc;
  local_18 = DAT_001a80f0;
  return func_001507D8(param_1,&local_18,0);
}

