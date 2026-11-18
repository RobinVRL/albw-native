// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0012C718(int param_1);
extern int func_0014D4FC(int param_1);
extern int func_0025B658(int param_1,int param_2,float fparam_0);
extern int func_0025B680(int param_1,int param_2,float fparam_0);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00537B38(int param_1);
extern int func_00539200(int param_1);
extern int func_00570160(int param_1);
extern longlong func_005701DC(int param_1,float fparam_0);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588AB4(int param_1,int param_2,int param_3);
extern int *DAT_00470440;
extern undefined DAT_00470444;
extern int DAT_0047045c;
extern int *DAT_00470460;
extern int *DAT_00470464;
extern float DAT_00470468;
extern float DAT_0047046c;
extern char s__ASE_PL_Sword_SWING_00470446[];
extern char s_cf_00470446[];
extern undefined4 _DAT_00470444;

// USA 0047035C <- EU 00470334 (Ghidra, non-matching)
// GLOBAL DAT_00470440 int *
// GLOBAL DAT_00470444 undefined
// GLOBAL DAT_0047045c int
// GLOBAL DAT_00470460 int *
// GLOBAL DAT_00470464 int *
// GLOBAL DAT_00470468 float
// GLOBAL DAT_0047046c float
// GLOBAL s_cf_00470446 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0047035C(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fparam_0;
  longlong lVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_80 ((undefined4 *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  iVar3 = func_00570160(*(int *)(param_1 + 0x98));
  if (iVar3 != 0) {
    **(undefined1 **)(param_1 + 0xe4) = 2;
    func_0014D4FC(*(int *)(*DAT_00470440 + 300));
    *(undefined4 *)(param_1 + 0xe4) = 0;
    func_0012C718(param_1);
  }
  lVar5 = func_005701DC(*(int *)(param_1 + 0x98),ALBW_AS_F32(_DAT_00470444));
  if ((int)lVar5 != 0) {
    func_0010A464(auStack_80);
    piVar1 = DAT_00470460;
    local_1c = s__ASE_PL_Sword_SWING_00470446 + 2;
    local_20 = DAT_0047045c;
    iVar3 = func_00587FCC(*DAT_00470460,&local_20);
    iVar4 = func_00537B38(*DAT_00470464);
    func_00588AB4(*piVar1,iVar4 + iVar3,(int)auStack_80);
    bVar2 = func_00539200((int)auStack_80);
    if (bVar2) {
      func_0025B810((int)auStack_80,0,DAT_00470468);
      fparam_0 = DAT_0047046c;
      func_0025B680((int)auStack_80,0,DAT_0047046c);
      func_0025B658((int)auStack_80,0,fparam_0);
    }
    func_0025B874(auStack_80);
  }
  return;
}

