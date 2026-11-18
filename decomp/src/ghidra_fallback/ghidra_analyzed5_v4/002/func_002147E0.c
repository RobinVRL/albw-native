#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00214C68(int param_1);
extern int func_00215EC4(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F68AC();

// USA 002147E0 <- EU 002147E0 (Ghidra, non-matching)

undefined4 func_002147E0(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define pfStack_14 (*(float * *)(albw_frame + 0x1c))
  if (*(char *)(param_1 + 0xb3a) != '\0') {
    func_00214C68(param_1);
    local_28 = *(float *)(param_1 + 0xa38);
    uStack_24 = *(undefined4 *)(param_1 + 0xa3c);
    uStack_20 = *(undefined4 *)(param_1 + 0xa40);
    func_00115C70(&local_28,&local_28,(float *)(param_1 + 0x3d0));
    func_00115C54(&local_1c,(float *)(param_1 + 0x9e4),&local_28);
    *(float *)(param_1 + 0x570) = local_1c;
    *(undefined4 *)(param_1 + 0x574) = uStack_18;
    *(float **)(param_1 + 0x578) = pfStack_14;
    func_00215EC4(param_1);
    param_3 = 0;
    func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,pfStack_14);
    param_4 = pfStack_14;
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}

