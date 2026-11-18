#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0027E7E4(int param_1,char param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern char s_SwitchBlueOn_0027e934[];
extern char s_SwitchRedOn_0027e928[];

// USA 0027E864 <- EU 0027E88C (Ghidra, non-matching)
// GLOBAL s_SwitchBlueOn_0027e934 string
// GLOBAL s_SwitchRedOn_0027e928 string

undefined4 func_0027E864(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x418) == '\x01') {
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) goto LAB_0027e8e0;
    func_0027E7E4(param_1,'\0');
    iVar2 = *(int *)(param_1 + 0x344);
    pcVar3 = s_SwitchBlueOn_0027e934;
  }
  else {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) goto LAB_0027e8e0;
    func_0027E7E4(param_1,'\x01');
    iVar2 = *(int *)(param_1 + 0x344);
    pcVar3 = s_SwitchRedOn_0027e928;
  }
  if (iVar2 != 0) {
    func_004A1B9C(aiStack_18,iVar2,(uint *)pcVar3);
  }
LAB_0027e8e0:
  return func_0014E138(param_1,param_2);
}

