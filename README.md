##Standard Containers
*Container_ը* օբյեկտ է, որը իր մեջ ներառում է այլ առարկաների հավաքածու: Դրանք իրականացված են որպես դասի template_ներ, ինչը թույլ է տալիս մեծ ճկունություն ունենալ որպես տարրեր տվյալ տեսակների մեջ:
*Container_ը* կառավարում է իր տարրերի զբաղեցրած տարածքը և ֆունկցիաներ է տրամադրում դրանց վրա հասանելիություն ունենալու համար՝ կա՛մ ուղղակիորեն, կա՛մ iterator_երի միջոցով (նման հատկություններ ունեցող օբյեկտների ցուցիչներին հղում):
*Container_ը* կրկնօրինակում են ծրագրավորման մեջ շատ հաճախ օգտագործվող կառուցվածքները՝ դինամիկ զանգվածներ (vector), հերթեր (queue), (stack), heaps (priority_queue), linked lists (list), trees (set), ասոցիատիվ զանգվածներ (map)...
Շատ Container ունեն միմյանց նման անդամ ֆունկցիաներ՝ կիսում են ֆունկցիոնալությունները:

stack, queue և priority_queue իրականացված են որպես *container adaptors*: Container adaptor_ները լրիվ containerային դասեր չեն, այլ դասեր, որոնք ապահովում են հատուկ ինտերֆեյս՝ հենվելով կոնտեյների դասերից մեկի օբյեկտի վրա (օրինակ՝ deque կամ list)՝ տարրերը մշակելու համար: Ներքևում գտնվող բեռնարկղը պարփակված է այնպես, որ դրա տարրերը հասանելի լինեն կոնտեյների ադապտերների անդամների կողմից՝ անկախ օգտագործվող հիմքում ընկած բեռնարկղի դասից:

-**Sequence containers**:
    -array	Array class (class template)
    -vector	Vector (class template)
    -deque	Double ended queue (class template)
    -forward_list	Forward list (class template)
    -list	List (class template)

Container adaptors:
stack	LIFO stack (class template)
queue	FIFO queue (class template)
priority_queue	Priority queue (class template)

Associative containers:
set	Set (class template)
multiset	Multiple-key set (class template)
map	Map (class template)
multimap	Multiple-key map (class template)