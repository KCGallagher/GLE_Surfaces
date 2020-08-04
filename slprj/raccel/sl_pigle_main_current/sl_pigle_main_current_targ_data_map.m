  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 43;
      section.data(43)  = dumData; %prealloc
      
	  ;% rtP.seed_values_1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.UniformRandomNumberx_Minimum
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 194;
	
	  ;% rtP.UniformRandomNumberx_Maximum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 195;
	
	  ;% rtP.UniformRandomNumberx_Seed
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196;
	
	  ;% rtP.UniformRandomNumbery_Minimum
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 293;
	
	  ;% rtP.UniformRandomNumbery_Maximum
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 294;
	
	  ;% rtP.UniformRandomNumbery_Seed
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 295;
	
	  ;% rtP.celldimx_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 392;
	
	  ;% rtP.celldimy_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 489;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 586;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 587;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 588;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 589;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_iujtnnssqz
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 590;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_j4tad5ykz4
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 591;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_ddvop3rvnp
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 592;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_l2ngdxqqv3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 593;
	
	  ;% rtP.forceX_tableData
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 594;
	
	  ;% rtP.forceX_bp01Data
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 2094;
	
	  ;% rtP.forceX_bp02Data
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 2144;
	
	  ;% rtP.forceY_tableData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 2174;
	
	  ;% rtP.forceY_bp01Data
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 3674;
	
	  ;% rtP.forceY_bp02Data
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 3724;
	
	  ;% rtP.WhiteNoise_Mean
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 3754;
	
	  ;% rtP.WhiteNoise_StdDev
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 3755;
	
	  ;% rtP.Output_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 3756;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 3757;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 3758;
	
	  ;% rtP.DataStoreMemory_InitialValue
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 3759;
	
	  ;% rtP.A_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 3953;
	
	  ;% rtP.celldim_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 3954;
	
	  ;% rtP.celldim1_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 4148;
	
	  ;% rtP.permvec_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 4342;
	
	  ;% rtP.B_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 4344;
	
	  ;% rtP.freeze_signal_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 4345;
	
	  ;% rtP.ones_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 4442;
	
	  ;% rtP.reset_signal_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 4443;
	
	  ;% rtP.mass_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 4540;
	
	  ;% rtP.zeros_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 4541;
	
	  ;% rtP.ones_Value_oocx40lm3j
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 4638;
	
	  ;% rtP.mass_Value_bobjrwbmcw
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 4639;
	
	  ;% rtP.zeros_Value_cq0rpxk0gt
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 4640;
	
	  ;% rtP.Interactions_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 4737;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.forceX_maxIndex
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.forceY_maxIndex
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtB.gakbmbh2d2
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fklh3xatdn
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 97;
	
	  ;% rtB.jkojapvkzw
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 194;
	
	  ;% rtB.gt11e00gkn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 291;
	
	  ;% rtB.bkxfqi0pxq
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 388;
	
	  ;% rtB.a01jyq3kex
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 582;
	
	  ;% rtB.akgj1ibwf3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 776;
	
	  ;% rtB.mnkabdxejs
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 970;
	
	  ;% rtB.h0heujskh3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 1067;
	
	  ;% rtB.ir0rpxetoe
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 1164;
	
	  ;% rtB.f4djn03i2n
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 1261;
	
	  ;% rtB.dv5qanofu3
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 1358;
	
	  ;% rtB.bvw5c55uf3
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 1455;
	
	  ;% rtB.jf2wd03mf3
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 1456;
	
	  ;% rtB.heb4ixm4x3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 1553;
	
	  ;% rtB.nwccmbl3cd
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 1554;
	
	  ;% rtB.jtfx14x1p1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1748;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.ao1gmdn2dp
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mdsl05dmxi
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 97;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.d1bg0wxfn3
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.kash4ux1pw
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cfhfmokiqc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 97;
	
	  ;% rtDW.dx3000kbdr
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 194;
	
	  ;% rtDW.btmvuptxgq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 291;
	
	  ;% rtDW.bd5ggsd5xp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 388;
	
	  ;% rtDW.kyo5azbgia
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 485;
	
	  ;% rtDW.ahvyf2z4j5
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 679;
	
	  ;% rtDW.jqip5ulbyv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 873;
	
	  ;% rtDW.pksdb1tv2w
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 970;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.odl14pd3py.FilePtr
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hgizhnb1sw.FilePtr
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cqmaavz11y.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nxv0llsori.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bvltoxi0lq.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.lw42huz5gz.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.nkihzgokkq
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.be0xujqbrq
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 194;
	
	  ;% rtDW.dwhnbnorml
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 291;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.foaim50aii.Count
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dfdzh3eryc.Count
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2440994980;
  targMap.checksum1 = 3658550794;
  targMap.checksum2 = 2796902773;
  targMap.checksum3 = 4144343447;

