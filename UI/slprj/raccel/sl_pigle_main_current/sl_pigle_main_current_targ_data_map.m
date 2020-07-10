  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (kwakm2xzrd)
    ;%
      section.nData     = 40;
      section.data(40)  = dumData; %prealloc
      
	  ;% kwakm2xzrd.UniformRandomNumberx_Minimum
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% kwakm2xzrd.UniformRandomNumberx_Maximum
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% kwakm2xzrd.UniformRandomNumberx_Seed
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% kwakm2xzrd.UniformRandomNumbery_Minimum
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 5;
	
	  ;% kwakm2xzrd.UniformRandomNumbery_Maximum
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 6;
	
	  ;% kwakm2xzrd.UniformRandomNumbery_Seed
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 7;
	
	  ;% kwakm2xzrd.celldimx_Value
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 10;
	
	  ;% kwakm2xzrd.celldimy_Value
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 13;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator2_gainval
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 16;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator2_IC
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 17;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator1_gainval
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 18;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator1_IC
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 19;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator2_gainval_iujtnnssqz
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 20;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator2_IC_j4tad5ykz4
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 21;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator1_gainval_ddvop3rvnp
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 22;
	
	  ;% kwakm2xzrd.DiscreteTimeIntegrator1_IC_l2ngdxqqv3
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 23;
	
	  ;% kwakm2xzrd.forceX_tableData
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 24;
	
	  ;% kwakm2xzrd.forceX_bp01Data
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 1524;
	
	  ;% kwakm2xzrd.forceX_bp02Data
	  section.data(19).logicalSrcIdx = 19;
	  section.data(19).dtTransOffset = 1574;
	
	  ;% kwakm2xzrd.forceY_tableData
	  section.data(20).logicalSrcIdx = 20;
	  section.data(20).dtTransOffset = 1604;
	
	  ;% kwakm2xzrd.forceY_bp01Data
	  section.data(21).logicalSrcIdx = 21;
	  section.data(21).dtTransOffset = 3104;
	
	  ;% kwakm2xzrd.forceY_bp02Data
	  section.data(22).logicalSrcIdx = 22;
	  section.data(22).dtTransOffset = 3154;
	
	  ;% kwakm2xzrd.WhiteNoise_Mean
	  section.data(23).logicalSrcIdx = 23;
	  section.data(23).dtTransOffset = 3184;
	
	  ;% kwakm2xzrd.WhiteNoise_StdDev
	  section.data(24).logicalSrcIdx = 24;
	  section.data(24).dtTransOffset = 3185;
	
	  ;% kwakm2xzrd.Output_Gain
	  section.data(25).logicalSrcIdx = 25;
	  section.data(25).dtTransOffset = 3186;
	
	  ;% kwakm2xzrd.DataStoreMemory_InitialValue
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 3187;
	
	  ;% kwakm2xzrd.A_Value
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 3193;
	
	  ;% kwakm2xzrd.celldim_Value
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 3194;
	
	  ;% kwakm2xzrd.celldim1_Value
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 3200;
	
	  ;% kwakm2xzrd.permvec_Value
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 3206;
	
	  ;% kwakm2xzrd.B_Value
	  section.data(31).logicalSrcIdx = 31;
	  section.data(31).dtTransOffset = 3208;
	
	  ;% kwakm2xzrd.freeze_signal_Value
	  section.data(32).logicalSrcIdx = 32;
	  section.data(32).dtTransOffset = 3209;
	
	  ;% kwakm2xzrd.ones_Value
	  section.data(33).logicalSrcIdx = 33;
	  section.data(33).dtTransOffset = 3212;
	
	  ;% kwakm2xzrd.reset_signal_Value
	  section.data(34).logicalSrcIdx = 34;
	  section.data(34).dtTransOffset = 3213;
	
	  ;% kwakm2xzrd.mass_Value
	  section.data(35).logicalSrcIdx = 35;
	  section.data(35).dtTransOffset = 3216;
	
	  ;% kwakm2xzrd.zeros_Value
	  section.data(36).logicalSrcIdx = 36;
	  section.data(36).dtTransOffset = 3217;
	
	  ;% kwakm2xzrd.ones_Value_oocx40lm3j
	  section.data(37).logicalSrcIdx = 37;
	  section.data(37).dtTransOffset = 3220;
	
	  ;% kwakm2xzrd.mass_Value_bobjrwbmcw
	  section.data(38).logicalSrcIdx = 38;
	  section.data(38).dtTransOffset = 3221;
	
	  ;% kwakm2xzrd.zeros_Value_cq0rpxk0gt
	  section.data(39).logicalSrcIdx = 39;
	  section.data(39).dtTransOffset = 3222;
	
	  ;% kwakm2xzrd.identity1_Value
	  section.data(40).logicalSrcIdx = 40;
	  section.data(40).dtTransOffset = 3225;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% kwakm2xzrd.forceX_maxIndex
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% kwakm2xzrd.forceY_maxIndex
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
	      
	    ;% seed_values_1
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 0;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(3) = section;
	    clear section
	  
    

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
    ;% Auto data (pgnpe5ro1jc)
    ;%
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% pgnpe5ro1jc.aexyztgedn
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% pgnpe5ro1jc.a23t0d3lvw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% pgnpe5ro1jc.jkojapvkzw
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% pgnpe5ro1jc.gt11e00gkn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% pgnpe5ro1jc.mz0qnurgag
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12;
	
	  ;% pgnpe5ro1jc.mflfjw2sbe
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 18;
	
	  ;% pgnpe5ro1jc.lz01df3oam
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 24;
	
	  ;% pgnpe5ro1jc.bax2hwmyr4
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 30;
	
	  ;% pgnpe5ro1jc.o2huc0ivol
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 36;
	
	  ;% pgnpe5ro1jc.d13mqwbs4m
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 42;
	
	  ;% pgnpe5ro1jc.ir0rpxetoe
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 45;
	
	  ;% pgnpe5ro1jc.ic5l2szdcd
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 48;
	
	  ;% pgnpe5ro1jc.jhrkdowu1q
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 51;
	
	  ;% pgnpe5ro1jc.bvw5c55uf3
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 54;
	
	  ;% pgnpe5ro1jc.jf2wd03mf3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 55;
	
	  ;% pgnpe5ro1jc.heb4ixm4x3
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 58;
	
	  ;% pgnpe5ro1jc.hvcbbqtbfi
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 59;
	
	  ;% pgnpe5ro1jc.hlb4lsy0px
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 62;
	
	  ;% pgnpe5ro1jc.jtfx14x1p1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 65;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% pgnpe5ro1jc.dtxhz4a2ix
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% pgnpe5ro1jc.mdsl05dmxi
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% pgnpe5ro1jc.d1bg0wxfn3
	  section.data(1).logicalSrcIdx = 21;
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
    nTotSects     = 3;
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
    ;% Auto data (mfkobyioa3u)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% mfkobyioa3u.luv0nigeak
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% mfkobyioa3u.e5yrdplfb2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% mfkobyioa3u.dx3000kbdr
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% mfkobyioa3u.btmvuptxgq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% mfkobyioa3u.jsan3mycru
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12;
	
	  ;% mfkobyioa3u.f13zyopuod
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 18;
	
	  ;% mfkobyioa3u.jqip5ulbyv
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 24;
	
	  ;% mfkobyioa3u.pksdb1tv2w
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 27;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% mfkobyioa3u.cqmaavz11y.LoggedData
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% mfkobyioa3u.nxv0llsori.LoggedData
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% mfkobyioa3u.bvltoxi0lq.LoggedData
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% mfkobyioa3u.lw42huz5gz.LoggedData
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% mfkobyioa3u.mhsyeglu0n
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% mfkobyioa3u.be0xujqbrq
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 6;
	
	  ;% mfkobyioa3u.dwhnbnorml
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
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


  targMap.checksum0 = 3827255553;
  targMap.checksum1 = 3528999091;
  targMap.checksum2 = 2712209232;
  targMap.checksum3 = 2237025405;

