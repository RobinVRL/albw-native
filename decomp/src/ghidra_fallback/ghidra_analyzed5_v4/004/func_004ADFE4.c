#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DB90(void);
extern int func_002CB0C0(int param_1,int *param_2);
extern int func_002CB12C(undefined4 *param_1);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004AE4E0(int param_1,int *param_2);
extern int func_004AF000(int param_1,int *param_2);
extern int func_0050D454(undefined4 *param_1);
extern undefined4 *DAT_004ae0a0;
extern undefined4 DAT_004ae0b4;
extern char s_MsgMgr__Course_004ae0a4[];
extern char s_cf_004ae0a4[];

// USA 004ADFE4 <- EU 004ADFBC (Ghidra, non-matching)
// GLOBAL DAT_004ae0a0 undefined4 *
// GLOBAL DAT_004ae0b4 undefined4
// GLOBAL s_cf_004ae0a4 string

undefined4 func_004ADFE4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar4 = DAT_004ae0a0;
  piVar1 = (int *)func_0010DB90();
  local_1c = s_MsgMgr__Course_004ae0a4;
  local_20 = DAT_004ae0b4;
  piVar1 = func_004A107C(0,(int)&local_20,piVar1,1,0);
  if (piVar1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*puVar4,piVar1);
  }
  func_004AF000(param_1,param_2);
  func_004AE4E0(param_1,param_2);
  puVar2 = (undefined4 *)func_0010BAB4(0x14);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0050D454(puVar2);
  }
  *(undefined4 **)(param_1 + 0x60) = puVar3;
  if (iVar5 != 1) {
    func_0010983C(*puVar4,iVar5);
  }
  (**(code **)(*piVar1 + 0x14))(piVar1);
  puVar3 = (undefined4 *)func_0010BAB4(0x1c);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_002CB12C(puVar3);
  }
  *(undefined4 **)(param_1 + 100) = puVar4;
  return func_002CB0C0((int)puVar4,(int *)0x0);
}

