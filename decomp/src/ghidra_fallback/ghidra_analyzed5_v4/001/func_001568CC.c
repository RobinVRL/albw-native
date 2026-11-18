#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00588BE4(int param_1);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001569ac;
extern int *DAT_001569b0;
extern int *DAT_001569b4;
extern int DAT_001569b8;
extern char s_SE_Crowly_V_FLY_START_001569d4[];
extern char s_SE_Kyune_V_FLY_START_001569bc[];

// USA 001568CC <- EU 001568D0 (Ghidra, non-matching)
// GLOBAL DAT_001569ac int
// GLOBAL DAT_001569b0 int *
// GLOBAL DAT_001569b4 int *
// GLOBAL DAT_001569b8 int
// GLOBAL s_SE_Crowly_V_FLY_START_001569d4 string
// GLOBAL s_SE_Kyune_V_FLY_START_001569bc string

int * func_001568CC(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  pfVar1 = (float *)func_00520FC0();
  piVar3 = (int *)ALBW_PTR_BITS(((*pfVar1 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar1 - ALBW_AS_F32(param_1[0xf4])) +
                  (pfVar1[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar1[2] - ALBW_AS_F32(param_1[0xf6]))));
  if (((int)piVar3 <= DAT_001569ac) && (iVar2 = param_1[0x15], piVar3 = param_1, -1 < (short)iVar2))
  {
    pfVar1 = (float *)func_00520FC0();
    piVar3 = (int *)func_00581D48(*DAT_001569b0,pfVar1);
    if (piVar3 == (int *)(int)(short)iVar2) {
      func_00657E5C(param_1 + 0x22f,1);
      iVar2 = func_00588BE4((int)param_1);
      local_18 = DAT_001569b8;
      if (iVar2 != *DAT_001569b4) {
        local_14 = s_SE_Crowly_V_FLY_START_001569d4;
        piVar3 = (int *)func_00150A84(param_1,&local_18,0);
        return piVar3;
      }
      local_14 = s_SE_Kyune_V_FLY_START_001569bc;
      piVar3 = (int *)func_00150A84(param_1,&local_18,0);
    }
  }
  return piVar3;
}

