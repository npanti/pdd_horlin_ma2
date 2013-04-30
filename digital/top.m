M                                           = 16;
SNR                                         = 40;
subChannels                                 = 64;
prefix_length                               = 16;
bitsNumber                                  = 1024*256;
OFDMsymbol                                  = (bitsNumber/log2(M))/subChannels;

bits=round(rand(bitsNumber, 1));
bandwidth = 20e6;
bandwidth_measure = 200e6;

channel = [-2.79763444268610e-05 + 0.000231108468142338i -0.000152236607391387 + 2.84977231785888e-05i -0.000437518960097805 + 1.46279326145304e-05i -0.000684478844050318 + 0.000277556537184864i -0.000715607544407249 + 0.000596343365032226i -0.000623831234406680 + 0.000907544686924666i -0.000350792601238936 + 0.00112620915751904i 2.15390791709069e-05 + 0.00126902840565890i 0.000381030375137925 + 0.00116140069440007i 0.000606118643190712 + 0.000916779972612858i 0.000597538601141423 + 0.000679862510878593i 0.000504113384522498 + 0.000720356707461178i 0.000599178485572338 + 0.000994388596154749i 0.00110421644058079 + 0.00117381557356566i 0.00172787159681320 + 0.000953917508013547i 0.00207126419991255 + 0.000315339944791049i 0.00205877353437245 - 0.000261893030256033i 0.00188202504068613 - 0.000753332104068250i 0.00174287101253867 - 0.00102680502459407i 0.00174910656642169 - 0.00141681067179888i 0.00163998198695481 - 0.00197879690676928i 0.00119386822916567 - 0.00268564024008811i 0.000456934008980170 - 0.00324399909004569i -0.000573235331103206 - 0.00350609957240522i -0.00174932111985981 - 0.00333730666898191i -0.00271378783509135 - 0.00272477651014924i -0.00340573024004698 - 0.00187650590669364i -0.00391681957989931 - 0.000935963005758822i -0.00421101413667202 + 0.000218739689444192i -0.00411691423505545 + 0.00156201305799186i -0.00343950605019927 + 0.00288853165693581i -0.00240187020972371 + 0.00377100217156112i -0.00118527596350759 + 0.00425035133957863i 0.000132718603708781 + 0.00443079555407167i 0.00154595577623695 + 0.00417633634060621i 0.00289303832687438 + 0.00332671916112304i 0.00369606772437692 + 0.00202252902090549i 0.00389938126318157 + 0.000530939723830670i 0.00359329907223582 - 0.000677347125019878i 0.00296348868869245 - 0.00165394984651357i 0.00196073576807976 - 0.00235392735339701i 0.000816403597127646 - 0.00245354906655848i -6.47476263111457e-05 - 0.00207391218282282i -0.000495673739351332 - 0.00154156191274524i -0.000710954540409148 - 0.00103013939224184i -0.000641762802843005 - 0.000609665177762508i -0.000499475805554539 - 0.000387175939977169i -0.000279862259048969 - 0.000320329883834347i -0.000112032379547600 - 0.000364251347491518i -2.21014361159178e-05 - 0.000626369146630168i -0.000280338834272698 - 0.000955545227043331i -0.000857314502354711 - 0.000984553480520845i -0.00127866573166102 - 0.000524076225701720i -0.00138232344761491 - 5.53687641513534e-06i -0.00134923844598234 + 0.000522191461641341i -0.00106968358159065 + 0.00107054843101650i -0.000433055043686181 + 0.00140780070796609i 0.000147810787893832 + 0.00127138150855899i 0.000478082365589216 + 0.000903378007933497i 0.000621148326899856 + 0.000610230956226587i 0.000668793043587357 + 0.000421812670538202i 0.000763272168114781 + 0.000238200344028883i 0.000874884426593781 + 1.54818883402186e-06i 0.000911540002562106 - 0.000380117300665006i 0.000718678114935756 - 0.000764091149903834i 0.000347002584021539 - 0.00106313300784677i -0.000170299055753276 - 0.00114362919703126i -0.000690819055307657 - 0.000921013706829399i -0.000982280704192817 - 0.000467087345896289i -0.000923311221413314 + 1.32699105961365e-05i -0.000773601292166859 + 0.000222335598664358i -0.000615793571341783 + 0.000333951000357047i -0.000529144075699151 + 0.000325958128087223i -0.000624347128905356 + 0.000347013643477112i -0.000720596755854785 + 0.000567794719245285i -0.000686792714986950 + 0.000879391503985971i -0.000451053114375100 + 0.00131475133821368i 7.82913120929152e-05 + 0.00167472672183067i 0.000872854143381119 + 0.00173298781737685i 0.00154295586980879 + 0.00132862431928515i 0.00196904409676790 + 0.000728219572920352i 0.00213912571780384 + 7.72167879858898e-07i 0.00203429278917611 - 0.000772373168729246i 0.00162662391085178 - 0.00138942780904472i 0.00106683233752847 - 0.00178577646147460i 0.000487252778839320 - 0.00202391878701746i -0.000107283172837924 - 0.00213592150248587i -0.000820703222416341 - 0.00201345514506102i -0.00152349146082997 - 0.00163881515618414i -0.00196659169159830 - 0.000987329753115773i -0.00204006605781615 - 0.000207751174457371i -0.00187116069719195 + 0.000492909981403500i -0.00150012364611030 + 0.00106379541102797i -0.00100136501714587 + 0.00148037110920995i -0.000306543544866145 + 0.00167649018112570i 0.000383201724616811 + 0.00143134815152735i 0.000638436176814139 + 0.000964909326285124i 0.000728841696400195 + 0.000608285539783537i 0.000755079730879515 + 0.000296786485705525i 0.000641841557808220 + 3.55078664142638e-05i 0.000505546689964831 - 0.000143751371069811i 0.000425334495957941 - 0.000165884004672989i 0.000381035613827407 - 0.000212078724871390i 0.000305259716697037 - 0.000310840201564133i 0.000268293544650078 - 0.000449538609245792i 1.47891769302078e-05 - 0.000507100427057594i -0.000188651742064394 - 0.000456501787994057i -0.000353871786501259 - 0.000285067304503173i -0.000505334814079106 - 5.93493459746242e-05i -0.000437028531450778 + 0.000244122740696184i -0.000178403905010782 + 0.000389383611036465i 2.16394455492264e-05 + 0.000354207906639203i 0.000170885308762081 + 0.000282383407466114i 0.000333634379785508 + 0.000152717082528397i 0.000379258999601007 - 0.000116349874588195i 0.000150146079249680 - 0.000400064163841307i -0.000173784108483233 - 0.000282708351733163i -0.000316777790430933 - 3.68572000297718e-05i -0.000256594765232876 + 0.000188287769560702i -9.74114082055166e-05 + 0.000384569138986990i 0.000152027030708268 + 0.000432740635005757i 0.000353645853465423 + 0.000322858104482293i 0.000457506044767797 + 0.000115842129162047i 0.000471503124572337 - 9.11231836653315e-05i 0.000319681159453467 - 0.000296347745461389i 0.000100080680567771 - 0.000380227807909250i -1.70677612914005e-05 - 0.000259624794125557i -2.93108337245940e-06 - 0.000160557901836000i 3.40162623615470e-05 - 0.000123338832054287i 0.000107562314951792 - 0.000145893747685477i 0.000150793683133088 - 0.000266916380496696i 8.15768362372182e-05 - 0.000356554897734895i -3.12973934342153e-05 - 0.000417294359067455i -0.000127957391669042 - 0.000434813642641529i -0.000294460449367762 - 0.000511954538524151i -0.000577857834286988 - 0.000416919472627342i -0.000835190701764077 - 0.000237045722315088i -0.000919994432479143 + 0.000150087289512157i -0.000741053430829197 + 0.000552354729734361i -0.000447109516244382 + 0.000742837728466839i -0.000152591950609349 + 0.000820477493107319i 0.000135348018375225 + 0.000778141256887466i 0.000401388737373054 + 0.000637891876976937i 0.000524430593941361 + 0.000379571254597977i 0.000516772095579654 + 0.000198425506823696i 0.000477601512102410 + 5.33148086105939e-05i 0.000457173591712490 - 3.80872152163647e-05i 0.000405148137360811 - 0.000168620463227853i 0.000282680062809959 - 0.000321957573760301i 2.27159634960117e-05 - 0.000399029144318774i -0.000155490110046230 - 0.000297156511805952i -0.000268504139967263 - 0.000108531661680900i -0.000261644803686067 + 5.10973113705404e-05i -0.000143418816151097 + 0.000240116991335526i 5.56405684619676e-05 + 0.000303509848890826i 0.000189020123798400 + 0.000274717691354454i 0.000337103905621916 + 0.000184010234079324i 0.000442942458903417 + 4.74886182928458e-05i 0.000452521082479507 - 0.000163564036483876i 0.000288469134829938 - 0.000367413886124268i 0.000101937526778784 - 0.000344000989571214i 2.66759871010436e-05 - 0.000344029336702079i 1.04904402178363e-05 - 0.000328009511576965i -8.47317351144739e-05 - 0.000349643814843148i -0.000198948910110630 - 0.000327822635881603i -0.000302765256492421 - 0.000226320888032205i -0.000258201529504731 - 9.66911538853310e-05i -0.000231745143537410 - 8.26974428491667e-05i -0.000196716777281836 - 7.53868807805702e-05i -0.000257004081504419 - 7.96057429397479e-05i -0.000293850462185219 - 2.19084704440320e-05i -0.000336532073561102 + 9.60147008299828e-05i -0.000288756680674851 + 0.000150545587530360i -0.000292809389065951 + 0.000240008070250042i -0.000240954337641597 + 0.000304610031889752i -9.72140769590624e-05 + 0.000379244855139405i 8.08962358860299e-05 + 0.000314328470267355i 7.07689832779579e-05 + 0.000172060419572517i 3.48697358276695e-05 + 0.000170680214068852i -8.39552626530349e-07 + 0.000213626364711672i 5.94350749452133e-05 + 0.000287873146589845i 0.000200809852685779 + 0.000339688907843083i 0.000313668628223240 + 0.000219597524846904i 0.000367636617738754 + 8.69405776029453e-05i 0.000332122755935416 + 7.09048435965087e-06i 0.000329126312863082 - 9.61184268817306e-05i 0.000251420453423634 - 0.000244132897933014i 4.10787470173091e-05 - 0.000252513738814741i -2.27009513764642e-05 - 0.000140757445478812i -3.48252142430283e-05 - 8.43691814225167e-05i 2.59893895417918e-05 - 3.04616187349893e-05i 7.13663539499976e-05 + 6.35007745586336e-06i 0.000100612283858936 - 3.87838699680287e-05i 0.000102503545349464 - 9.26998909562826e-05i 5.97922698943876e-05 - 0.000122267374536023i 5.37019841431174e-05 - 0.000135307243908755i 1.92132101801690e-05 - 0.000197672576177865i -4.59229704574682e-05 - 0.000181383817107417i -6.27167901257053e-05 - 0.000153678978676908i -9.26112916204147e-05 - 0.000144016186823137i -0.000134205198264681 - 0.000113562527985778i];
step_20mhz = (length(channel)-1)*bandwidth/bandwidth_measure;
channel_20mhz = channel(100-step_20mhz/2:100+step_20mhz/2);
impChannel_20mhz = ifft(channel_20mhz);
impChannel_20mhz = impChannel_20mhz().';

%% TX

%Modulation
signal = modulation(bits,M);

%S/P
signal = imux(signal,subChannels);

%iFFT
signal = ifft(signal,[],1);

%insert cyclic prefix
signal = insertCyclicPrefix(signal,prefix_length);

%P/S
signal = mux(signal);

%% Channel

%Convolution
signal = convChannel(signal,impChannel_20mhz);

%% RX

%S/P
signal = imux(signal,subChannels+prefix_length);

%remove cyclic prefix
signal = removeCyclicPrefix(signal,prefix_length);

%FFT
signal = fft(signal,[],1);

%Equalisation
channelFFT = fft(impChannel_20mhz,subChannels);

for i=1:OFDMsymbol
    signal(:,i) = signal(:,i)./channelFFT;
end

%P/S
signal = mux(signal);

%Demodulation
receivedBits = demodulation(signal,M);

errorRate(bits,receivedBits);
