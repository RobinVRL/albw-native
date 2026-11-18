// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014DD84(int param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_0014E460(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0026F8D4(int param_1,undefined4 param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_00556D04(int param_1);
extern int DAT_0024753c;
extern int *DAT_00247540;
extern int *DAT_00247544;
extern int *DAT_00247548;
extern char s_SE_FirePiller_BURNING_00247524[];

// USA 00247434 <- EU 00247434 (Ghidra, non-matching)
// GLOBAL DAT_0024753c int
// GLOBAL DAT_00247540 int *
// GLOBAL DAT_00247544 int *
// GLOBAL DAT_00247548 int *
// GLOBAL s_SE_FirePiller_BURNING_00247524 string

undefined4 func_00247434(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x414) == '\x01' || *(char *)(param_1 + 0x414) == '\x02') {
    local_1c = s_SE_FirePiller_BURNING_00247524;
    local_20 = DAT_0024753c;
    func_001507D8(param_1,&local_20,0);
    piVar1 = DAT_00247548;
    if (param_2 == 0) {
      local_28[0] = *(int *)(param_1 + 0x2cc);
      func_0026FC20(*(int *)(*DAT_00247548 + 0xf9c),(int)(char)*(undefined2 *)(param_1 + 0x4de),
                    local_28,(undefined4 *)(param_1 + 0x3d0));
      func_0026F8D4(*(int *)(*piVar1 + 0xf9c),param_1 + 0x3d0);
    }
  }
  iVar2 = *DAT_00247540;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
  }
  if ((iVar2 == 0 || iVar3 == 0) || (iVar3 = func_00556D04(*DAT_00247544), iVar3 != 0)) {
    func_0014DD84(param_1);
  }
  else {
    func_0014E460(param_1);
  }
  return func_0014E138(param_1,param_2);
}

