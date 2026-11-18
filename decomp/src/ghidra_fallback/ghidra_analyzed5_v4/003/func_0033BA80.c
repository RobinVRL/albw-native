#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033baec;
extern int *DAT_0033bb08;
extern char s_SE_LightArrow_DAMAGE_0033bad4[];
extern char s_SE_LightArrow_REFLECT_0033baf0[];

// USA 0033BA80 <- EU 0033BA5C (Ghidra, non-matching)
// GLOBAL DAT_0033baec int
// GLOBAL DAT_0033bb08 int *
// GLOBAL s_SE_LightArrow_DAMAGE_0033bad4 string
// GLOBAL s_SE_LightArrow_REFLECT_0033baf0 string

bool func_0033BA80(int *param_1)

{
  int iVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_0033baec;
  bVar2 = (char)param_1[0x104] == '\x01';
  if (bVar2) {
    local_14 = s_SE_LightArrow_DAMAGE_0033bad4;
    local_18 = DAT_0033baec;
    func_00150A84(param_1,&local_18,0);
    local_14 = s_SE_LightArrow_REFLECT_0033baf0;
    local_18 = iVar1;
    func_002DF0B0(*DAT_0033bb08,&local_18,3);
    func_00665E08(param_1 + 0x103,2);
  }
  return bVar2;
}

