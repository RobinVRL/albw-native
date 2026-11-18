#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005efe90;
extern undefined4 *DAT_005efe94;
extern undefined4 DAT_005efea8;
extern undefined4 DAT_005efeac;
extern undefined4 DAT_005efeb0;
extern undefined4 *DAT_005efeb4;
extern undefined4 *DAT_005efec8;
extern undefined4 *DAT_005efee0;
extern undefined4 *DAT_005efef4;
extern undefined4 *DAT_005eff0c;
extern char s_DelayParam_DSP__005eff10[];
extern char s_DelayParam_NW__005efeb8[];
extern char s_DelayParam_SDK__005efee4[];
extern char s_ReverbParam_DSP__005efef8[];
extern char s_ReverbParam_NW__005efe98[];
extern char s_ReverbParam_SDK__005efecc[];

// USA 005EFDE4 <- EU 005EFDBC (Ghidra, non-matching)
// GLOBAL DAT_005efe90 undefined4 *
// GLOBAL DAT_005efe94 undefined4 *
// GLOBAL DAT_005efea8 undefined4
// GLOBAL DAT_005efeac undefined4
// GLOBAL DAT_005efeb0 undefined4
// GLOBAL DAT_005efeb4 undefined4 *
// GLOBAL DAT_005efec8 undefined4 *
// GLOBAL DAT_005efee0 undefined4 *
// GLOBAL DAT_005efef4 undefined4 *
// GLOBAL DAT_005eff0c undefined4 *
// GLOBAL s_DelayParam(DSP)_005eff10 string
// GLOBAL s_DelayParam(NW)_005efeb8 string
// GLOBAL s_DelayParam(SDK)_005efee4 string
// GLOBAL s_ReverbParam(DSP)_005efef8 string
// GLOBAL s_ReverbParam(NW)_005efe98 string
// GLOBAL s_ReverbParam(SDK)_005efecc string

undefined4 func_005EFDE4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005efe90;
  *DAT_005efe90 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005efea8;
  puVar1 = DAT_005efe94;
  *DAT_005efe94 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_ReverbParam_NW__005efe98;
  puVar1[2] = uVar2;
  puVar1 = DAT_005efeb4;
  DAT_005efeb4[1] = s_DelayParam_NW__005efeb8;
  *puVar1 = uVar2;
  puVar1 = DAT_005efec8;
  DAT_005efec8[1] = s_ReverbParam_SDK__005efecc;
  *puVar1 = uVar2;
  puVar1 = DAT_005efee0;
  DAT_005efee0[1] = s_DelayParam_SDK__005efee4;
  *puVar1 = uVar2;
  puVar1 = DAT_005efef4;
  DAT_005efef4[1] = s_ReverbParam_DSP__005efef8;
  *puVar1 = uVar2;
  puVar1 = DAT_005eff0c;
  DAT_005eff0c[1] = s_DelayParam_DSP__005eff10;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

