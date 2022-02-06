c++ - How to use std::atomic<> effectively for non-primitive types? - Stack Overflow                            

[](#)

[Stack Overflow](https://stackoverflow.com)

1.  [Products](#)

1.  [Stack Overflow Public questions & answers](/)
2.  [Stack Overflow for Teams Where developers & technologists share private knowledge with coworkers](/teams)
3.  [Jobs Programming & related technical career opportunities](/jobs?so_source=ProductsMenu&so_medium=StackOverflow)
4.  [Talent Recruit tech talent & build your employer brand](https://stackoverflow.com/talent)
5.  [Advertising Reach developers & technologists worldwide](https://stackoverflow.com/advertising)
6.  [About the company](/company)

 

Loading…

2.  [
    
    ![](https://www.gravatar.com/avatar/acfadccd2f7d962908d4edbf0007277f?s=48&d=identicon&r=PG&f=1)
    
    U S
    
    9
    
    , 9 reputation
    
    ●11 bronze badge
    
    ](/users/5589319/u-s)
3.  [6](https://stackexchange.com/users/7338992?tab=inbox "You have unread inbox messages")
4.  [+3](https://stackexchange.com/users/7338992?tab=reputation "You have new reputation changes")

*   [Tour Start here for a quick overview of the site](/tour)
*   [Help Center Detailed answers to any questions you might have](/help)
*   [Meta Discuss the workings and policies of this site](https://meta.stackoverflow.com)
*   [About Us Learn more about Stack Overflow the company](https://stackoverflow.com/company)
*   [Business Learn more about hiring developers or posting ads with us](https://stackoverflowbusiness.com/?ref=topbar_help)

8.  ### [current community](https://stackoverflow.com)
    
    [
    
    ![](https://www.gravatar.com/avatar/acfadccd2f7d962908d4edbf0007277f?s=32&d=identicon&r=PG&f=1)
    
    
    ](/users/5589319/u-s)
    
    [U S](/users/5589319/u-s)
    
    911 bronze badge
    
    [log out](https://stackoverflow.com/users/logout)
    
    *   [
        
        Stack Overflow](https://stackoverflow.com)
        
        [help](https://stackoverflow.com/help) [chat](https://chat.stackoverflow.com/?tab=site&host=stackoverflow.com) [log out](https://stackoverflow.com/users/logout)
        
    *   [
        
        Meta Stack Overflow](https://meta.stackoverflow.com)
    
    ### [your communities](https://stackexchange.com/users/7338992/?tab=accounts)
    
    [edit](#) [cancel](#)
    
    *   [
        
        Stack Overflow 9](https://stackoverflow.com)
    
    Add
    
    [Reset](#) Save
    
    ### [more stack exchange communities](https://stackexchange.com/sites)
    
    [company blog](https://stackoverflow.blog)
    

1.  [
    
    Home
    
    
    
    ](/)
2.  1.  Public
    2.  [Questions](/questions)
    3.  [
        
        Tags
        
        
        
        ](/tags)
    4.  [
        
        Users
        
        
        
        ](/users)
    5.  Collectives
        
    6.  [Explore Collectives](/collectives)
    7.  Find a Job
    8.  [
        
        Jobs
        
        
        
        ](/jobs?so_medium=StackOverflow&so_source=SiteNav)
    9.  [
        
        Companies
        
        
        
        ](/jobs/companies?so_medium=StackOverflow&so_source=SiteNav)
3.  [](# "Dismiss")
    
    Teams
    
    **Stack Overflow for Teams** – Collaborate and share knowledge with a private group. ![](https://cdn.sstatic.net/Img/teams/teams-illo-free-sidebar-promo.svg?v=47faa659a05e)
     [Create a free Team](https://stackoverflow.com/teams/create/free?utm_source=so-owned&utm_medium=side-bar&utm_campaign=campaign-38&utm_content=cta) [What is Teams?](https://stackoverflow.com/teams)
    
    2.  Teams
        
    3.  [
        
        Create free Team
        
        
        
        ](https://stackoverflow.com/teams/create/free?utm_source=so-owned&utm_medium=side-bar&utm_campaign=campaign-38&utm_content=cta "Stack Overflow for Teams is a private, secure spot for your organization's questions and answers.")

Collectives on Stack Overflow

Find centralized, trusted content and collaborate around the technologies you use most.

[Learn more](/collectives)

**Teams**

Q&A for work

Connect and share knowledge within a single location that is structured and easy to search.

[Learn more](https://stackoverflow.com/teams)

[How to use std::atomic<> effectively for non-primitive types?](/questions/13885617/how-to-use-stdatomic-effectively-for-non-primitive-types)
=============================================================================================================================================

[Ask Question](/questions/ask)

Asked 9 years, 1 month ago

Active [4 years, 6 months ago](?lastactivity "2017-07-24 16:22:57Z")

Viewed 23k times

This question shows research effort; it is useful and clear

49

This question does not show any research effort; it is unclear or not useful

14

Bookmark this question.

[](/posts/13885617/timeline)

Show activity on this post.

[The definitions for `std::atomic<>`](http://en.cppreference.com/w/cpp/atomic/atomic) seem to show its obvious usefulness for primitive or perhaps POD-types.

When would you actually use it for classes?

When should you **avoid** using it for classes?

[c++](/questions/tagged/c%2b%2b "show questions tagged 'c++'") [multithreading](/questions/tagged/multithreading "show questions tagged 'multithreading'") [c++11](/questions/tagged/c%2b%2b11 "show questions tagged 'c++11'") [thread-safety](/questions/tagged/thread-safety "show questions tagged 'thread-safety'")

[Share](/q/13885617/5589319 "Short permalink to this question")

Share a link to this question (Includes your user id)

Copy link[CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/ "The current license for this post: CC BY-SA 3.0")

Edit

Follow

Follow this question to receive notifications

[edited Apr 4 '15 at 14:48](/posts/13885617/revisions "show all edits to this post")

[

![](https://i.stack.imgur.com/jTKEm.png?s=64&g=1)


](/users/313113/alex-bitek)

[Alex Bitek](/users/313113/alex-bitek)

6,41344 gold badges4545 silver badges7777 bronze badges

asked Dec 14 '12 at 20:14

[

![](https://www.gravatar.com/avatar/376b5c51229d1bf892f6ecca1695aae3?s=64&d=identicon&r=PG)


](/users/975129/kfmfe04)

[kfmfe04](/users/975129/kfmfe04)kfmfe04

14.5k1212 gold badges7171 silver badges134134 bronze badges

[Add a comment](# "Use comments to ask for more information or suggest improvements. Avoid answering questions in comments.")  | [](# "Expand to show all comments on this post")

4 Answers 4
-----------

[Active](/questions/13885617/how-to-use-stdatomic-effectively-for-non-primitive-types?answertab=active#tab-top "Answers with the latest activity first") [Oldest](/questions/13885617/how-to-use-stdatomic-effectively-for-non-primitive-types?answertab=oldest#tab-top "Answers in the order they were provided") [Score](/questions/13885617/how-to-use-stdatomic-effectively-for-non-primitive-types?answertab=votes#tab-top "Answers with the highest score first")

This answer is useful

32

This answer is not useful

[](/posts/13886416/timeline)

Show activity on this post.

The operations `std::atomic` makes available on any trivially copyable type are pretty basic. You can construct and destroy `atomic<T>`, you can ask if the type `is_lock_free()`, you can load and store copies of `T`, and you can exchange values of `T` in various ways. If that's sufficient for your purpose then you might be better off doing that than holding an explicit lock.

If those operations aren't sufficient, if for example you need to atomically perform a sequence operations directly on the value, or if the object is large enough that copying is expensive, then instead you would probably want to hold an explicit lock which you manage to achieve your more complex goals or avoid doing all the copies that using `atomic<T>` would involve.

```null
// non-POD type that maintains an invariant a==b without any care for
// thread safety.
struct T { int b; }
struct S : private T {
    S(int n) : a{n}, b{n} {}
    void increment() { a++; b++; }
private:
    int a;
};

std::atomic<S> a{{5}}; // global variable

// how a thread might update the global variable without losing any
// other thread's updates.
S s = a.load();
S new_s;
do {
    new_s = s;
    new_s.increment(); // whatever modifications you want
} while (!a.compare_exchange_strong(s, new_s));
```

As you can see, this basically gets a copy of the value, modifies the copy, then tries to copy the modified value back, repeating as necessary. The modifications you make to the copy can be as complex as you like, not simply limited to single member functions.

[Share](/a/13886416/5589319 "Short permalink to this answer")

Share a link to this answer (Includes your user id)

Copy link[CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/ "The current license for this post: CC BY-SA 3.0")

Edit

Follow

Follow this answer to receive notifications

[edited Nov 3 '15 at 16:43](/posts/13886416/revisions "show all edits to this post")

answered Dec 14 '12 at 21:22

[

![](https://www.gravatar.com/avatar/1397eae94e7fe715f040459c988c40b1?s=64&d=identicon&r=PG)


](/users/365496/bames53)

[bames53](/users/365496/bames53)bames53

82k1313 gold badges166166 silver badges233233 bronze badges

6

*   1
    
    +1 for a specific use case - so making S atomic is effectively like putting mutex locks on all methods of S? const and non-const methods?
    
    – [kfmfe04](/users/975129/kfmfe04 "14,453 reputation")
    
    [Dec 16 '12 at 18:22](#comment19160479_13886416)
    
*   3
    
    @kfmfe04: You need to call a.load() to get your S, and after that you are unguarded and each method call is not guarded. All you're getting is load/store into 'a'.
    
    – [VoidStar](/users/981367/voidstar "4,816 reputation")
    
    [Dec 18 '14 at 22:38](#comment43540058_13886416)
    
*   2
    
    @kfmfe04 It's not like a mutex on each individual method. For example you can call multiple methods and apply the results as a single atomic transaction. What's going on is that you get a local, non-shared copy, you modify the local copy however you like, and then you attempt copy the modified data back into the shared variable.
    
    – [bames53](/users/365496/bames53 "82,013 reputation")
    
    [Dec 19 '14 at 6:13](#comment43547258_13886416)
    
*   2
    
    The loop _does_ load the value: `compare_exchange_strong` either succeeds in updating the atomic, or it replaces the value in the 'expected' argument with the newly observed value so that you know what to expect next time around. So if the exchange fails, the new value is loaded into `s`, then the loop copies the new value, makes its change again which may have a different result from the previous iteration, and attempts to store the new value.
    
    – [bames53](/users/365496/bames53 "82,013 reputation")
    
    [Nov 3 '15 at 15:39](#comment54789691_13886416)
    
*   1
    
    @pocketbroadcast Thanks for the `!` correction. The `memcpy` requirement is already referred to (in the first sentence as '[trivially copiable](http://en.cppreference.com/w/cpp/types/is_trivially_copyable)'). I think it's better to leave discussion of the specifics of `compare_exchange` to more complete documentation, since there's more to it than just the load. For example [here's](http://stackoverflow.com/questions/21879331/is-stdatomic-compare-exchange-weak-thread-unsafe-by-design) some discussion of an issue with `compare_exchange` that even some experts took time to fully grasp.
    
    – [bames53](/users/365496/bames53 "82,013 reputation")
    
    [Nov 3 '15 at 17:12](#comment54793620_13886416)
    

[](# "Use comments to ask for more information or suggest improvements. Avoid comments like “+1” or “thanks”.") |  [Show **1** more comment](# "Expand to show all comments on this post")

This answer is useful

14

This answer is not useful

[](/posts/13885644/timeline)

Show activity on this post.

It works for primitive and POD types. The type must be `memcpy`\-able, so more general classes are out.

[Share](/a/13885644/5589319 "Short permalink to this answer")

Share a link to this answer (Includes your user id)

Copy link[CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/ "The current license for this post: CC BY-SA 3.0")

Edit

Follow

Follow this answer to receive notifications

[edited Dec 14 '12 at 20:46](/posts/13885644/revisions "show all edits to this post")

answered Dec 14 '12 at 20:17

[

![](https://www.gravatar.com/avatar/1361e47a8bf06d20ffda9a686ceb7e68?s=64&d=identicon&r=PG)


](/users/1593860/pete-becker)

[Pete Becker](/users/1593860/pete-becker)Pete Becker

71.5k66 gold badges7070 silver badges155155 bronze badges

2

*   13
    
    All that's required seems to be that the type is trivially copyable. POD types are stricter than that, so many non-POD types can be used with `atomic<T>`.
    
    – [bames53](/users/365496/bames53 "82,013 reputation")
    
    [Dec 14 '12 at 20:41](#comment19128284_13885644)
    
*   1
    
    The copy constructor of your type must be `noexcept` because the `std::atomic` constructor given an initial value is `noexcept` but is passed the initial value by-value.
    
    – [Raedwald](/users/545127/raedwald "42,613 reputation")
    
    [Dec 5 '17 at 23:01](#comment82287422_13885644)
    

[Add a comment](# "Use comments to ask for more information or suggest improvements. Avoid comments like “+1” or “thanks”.")  | [](# "Expand to show all comments on this post")

This answer is useful

7

This answer is not useful

[](/posts/13885860/timeline)

Show activity on this post.

The standard say that

> Specializations and instantiations of the atomic template shall have a deleted copy constructor, a deleted copy assignment operator, and a constexpr value constructor.

If that is strictly the same as the answer by Pete Becker, I'm not sure. I interpret this such that you are free to specialize on your own class (not only memcpy-able classes).

[Share](/a/13885860/5589319 "Short permalink to this answer")

Share a link to this answer (Includes your user id)

Copy link[CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/ "The current license for this post: CC BY-SA 3.0")

Edit

Follow

Follow this answer to receive notifications

[edited Dec 14 '12 at 20:49](/posts/13885860/revisions "show all edits to this post")

answered Dec 14 '12 at 20:34

[

![](https://www.gravatar.com/avatar/ac4f96b553d2e45776bd6235fee4222d?s=64&d=identicon&r=PG)


](/users/1149664/johan-lundberg)

[Johan Lundberg](/users/1149664/johan-lundberg)Johan Lundberg

24.6k99 gold badges6868 silver badges9393 bronze badges

7

*   2
    
    I think you meant to quote paragraph 1 instead: "There is a generic class template `atomic<T>`. The type of the template argument T shall be trivially copyable (3.9)," because paragraph 3, the paragraph you quote, doesn't say the same thing or even specify any requirements on the types you may use with the generic class template `atomic<T>`.
    
    – [bames53](/users/365496/bames53 "82,013 reputation")
    
    [Dec 14 '12 at 20:38](#comment19128195_13885860)
    
*   @bames53 actually, the question is unclear if it's about the generic `atomic<T>` class or the interface it provides. You could still re-use the interface by providing your own specialization.
    
    – [KillianDS](/users/243870/killiands "16,396 reputation")
    
    [Dec 14 '12 at 20:44](#comment19128361_13885860)
    
*   Hm. No, I did not copy the wrong paragraph. I didn't interpret that first paragraph as clearly being demanded also for specializations.
    
    – [Johan Lundberg](/users/1149664/johan-lundberg "24,577 reputation")
    
    [Dec 14 '12 at 20:44](#comment19128374_13885860)
    
*   @JohanLundberg - no, it's not the same. That's a constraint on implementations, not on the types that the template is instantiated with.
    
    – [Pete Becker](/users/1593860/pete-becker "71,478 reputation")
    
    [Dec 14 '12 at 20:48](#comment19128467_13885860)
    
*   2
    
    The implementation of `atomic` in the standard library requires that `T` be `memcpy`able; that's how `std::atomic` copies values. The reason for that is to avoid calling out into user code through an assignment operator, since that could lead to deadlock.
    
    – [Pete Becker](/users/1593860/pete-becker "71,478 reputation")
    
    [Dec 14 '12 at 20:54](#comment19128632_13885860)
    

[](# "Use comments to ask for more information or suggest improvements. Avoid comments like “+1” or “thanks”.") |  [Show **2** more comments](# "Expand to show all comments on this post")

This answer is useful

2

This answer is not useful

[](/posts/33501669/timeline)

Show activity on this post.

I'd prefer std::mutex for this kind of scenarios. Nevertheless I've tried a poor mans benchmark to profile a version with std::atomics and std::mutex in a single threaded (and thus perfectly sync) environment.

```null
#include <chrono>
#include <atomic>
#include <mutex>

std::mutex _mux;
int i = 0;
int j = 0;
void a() {
    std::lock_guard<std::mutex> lock(_mux);
    i++;
    j++;
}

struct S {
    int k = 0;
    int l = 0;

    void doSomething() {
        k++;
        l++;
    }
};

std::atomic<S> s;
void b() {
    S tmp = s.load();
    S new_s;
    do {
        new_s = tmp;
        //new_s.doSomething(); // whatever modifications you want
        new_s.k++;
        new_s.l++;
    } while (!s.compare_exchange_strong(tmp, new_s));
}

void main(void) {

    std::chrono::high_resolution_clock clock;

    auto t1 = clock.now();
    for (int cnt = 0; cnt < 1000000; cnt++)
        a();
    auto diff1 = clock.now() - t1;

    auto t2 = clock.now();
    for (int cnt = 0; cnt < 1000000; cnt++)
        b();
    auto diff2 = clock.now() - t2;

    auto total = diff1.count() + diff2.count();
    auto frac1 = (double)diff1.count() / total;
    auto frac2 = (double)diff2.count() / total;
}
```

on my system the version using std::mutex was faster than the std::atomic approach. I think this is caused by the additional copying of the values. Further, if used in a multithreaded environment, the the busy looping can affect performance too.

Summing up, yes it is possible to use std::atomic with various pod types, but in most cases std::mutex is the weapon of choice, as it is intentionally easier to understand what is going on, and therefore is not as prone to bugs as the version presented with the std::atomic.

[Share](/a/33501669/5589319 "Short permalink to this answer")

Share a link to this answer (Includes your user id)

Copy link[CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/ "The current license for this post: CC BY-SA 3.0")

Edit

Follow

Follow this answer to receive notifications

[edited Nov 3 '15 at 16:03](/posts/33501669/revisions "show all edits to this post")

answered Nov 3 '15 at 14:32

[

![](https://www.gravatar.com/avatar/9a3f56b8a4893dd2bb774ddda08eed7d?s=64&d=identicon&r=PG&f=1)


](/users/5346799/pocketbroadcast)

[pocketbroadcast](/users/5346799/pocketbroadcast)pocketbroadcast

13911 silver badge77 bronze badges

1

*   2
    
    atomic gives you memory ordering though: [cplusplus.com/reference/atomic/memory\_order](http://www.cplusplus.com/reference/atomic/memory_order/)
    
    – [Andrew](/users/1599699/andrew "4,294 reputation")
    
    [Feb 18 '17 at 4:50](#comment71777034_33501669)
    

[Add a comment](# "Use comments to ask for more information or suggest improvements. Avoid comments like “+1” or “thanks”.")  | [](# "Expand to show all comments on this post")

  

Your Answer
-----------

*   Links
*   Images
*   Styling/Headers
*   Lists
*   Blockquotes
*   Code
*   HTML
*   Tables
*   [Advanced help](/editing-help)

In most cases, a plain URL will be recognized as such and automatically linked:

Visit https://area51.stackexchange.com/ regularly!
Use angle brackets to force linking: Have you seen <https://superuser.com>?

To create fancier links, use Markdown:

Here's \[a link\](https://www.example.com/)! And a reference-style link to \[a panda\]\[1\].
References don't have to be \[numbers\]\[question\].

 \[1\]: https://notfound.stackexchange.com/
 \[question\]: https://english.stackexchange.com/questions/11481

You can add tooltips to links:

Click \[here\](https://diy.stackexchange.com"this text appears when you mouse over")!
This works with \[reference links\]\[blog\] as well.

 \[blog\]: https://stackoverflow.blog/"click here for updates"

Images are exactly like links, but they have an exclamation point in front of them:

!\[a busy cat\](https://cdn.sstatic.net/Sites/stackoverflow/Img/error-lolcat-problemz.jpg)
!\[two muppets\]\[1\]

 \[1\]: https://i.imgur.com/I5DFV.jpg "tooltip"

The word in square brackets is the alt text, which gets displayed if the browser can't show the image. Be sure to include meaningful alt text for screen-reading software.

Be sure to use text styling sparingly; only where it helps readability.

\*This is italicized\*, and so
is \_this\_.

\*\*This is bold\*\*, just like \_\_this\_\_.

You can \*\*\*combine\*\*\* them
if you \_\_\_really have to\_\_\_.

To break your text into sections, you can use headers:

A Large Header
==============

Smaller Subheader
-----------------

Use hash marks if you need several levels of headers:

\# Header 1 #
## Header 2 ##
### Header 3 ###

Both bulleted and numbered lists are possible:

\-Use a minus sign for a bullet
+Or plus sign
\*Or an asterisk

1.Numbered lists are easy
2.Markdown keeps track of
   the numbers for you
7.So this will be item 3.

1.Lists in a list item:
\-Indented four spaces.
\*indented eight spaces.
\-Four spaces again.
2.You can have multiple
paragraphs in a list items.
Just be sure to indent.

\> Create a blockquote by
> prepending “>” to each line.
>
> Other formatting also works here, e.g.
>
> 1. Lists or
> 2. Headings:
>
> ## Quoted Heading ##

You can even put blockquotes in blockquotes:

\> A standard blockquote is indented
> > A nested blockquote is indented more
> > > > You can nest to any depth.

To create code blocks or other preformatted text, indent by four spaces or surround with groups of backticks:

This will be displayed in a monospaced font. The first four spaces
will be stripped off, but all other whitespace will be preserved.

\`\`\`
Markdown and HTML are turned off in code blocks:
<i>This is not italic</i>, and \[this is not a link\](https://example.com)
\`\`\`

To create not a block, but an inline code span, use backticks:

The \`$\` character is just a shortcut for \`window.jQuery\`.

If you want to have a preformatted block within a list, indent by eight spaces:

1\. This is normal text.
2. So is this, but now follows a code block:
Skip a line and indent eight spaces.
That's four spaces for the list
and four to trigger the code block.

If you need to do something that Markdown can't handle, use HTML. Note that [we only support a very strict subset of HTML!](https://meta.stackexchange.com/questions/1777/what-html-tags-are-allowed)

Strikethrough humor is <strike>funny</strike>.

Markdown is smart enough not to mangle your span-level HTML:

<b>Markdown works \*fine\* in here.</b>

Block-level HTML elements have a few restrictions:

1.  They must be separated from surrounding text by blank lines.
2.  The begin and end tags of the outermost block element must not be indented.
3.  Markdown can't be used within HTML blocks.

  

<pre>
    You can <em>not</em> use Markdown in here.
</pre>

You can create tables using the [GitHub-flavored markdown format](https://github.github.com/gfm/#tables-extension-).

| A header | Another header |
| -------- | -------------- |
| First    | row            |
| Second   | row            |

*   A header row is required and must be followed by a separator row with the same number of cells
*   Cells are separated by a pipe (`|`) symbol

Set the **alignment** of a table column by placing a `:` on the left, right, or both sides of a separator in the separator line.

| left | center | right |
|:---- |:------:| -----:|
| One  | Two    | Three |

Thanks for contributing an answer to Stack Overflow!

*   Please be sure to _answer the question_. Provide details and share your research!

But _avoid_ …

*   Asking for help, clarification, or responding to other answers.
*   Making statements based on opinion; back them up with references or personal experience.

To learn more, see our [tips on writing great answers](/help/how-to-answer).

Some of your past answers have not been well-received, and you're in danger of being [blocked from answering](/help/answer-bans).

Please pay close attention to the following guidance:

*   Please be sure to _answer the question_. Provide details and share your research!

But _avoid_ …

*   Asking for help, clarification, or responding to other answers.
*   Making statements based on opinion; back them up with references or personal experience.

To learn more, see our [tips on writing great answers](/help/how-to-answer).

Draft saved

Draft discarded

 

Post Your Answer Discard

Not the answer you're looking for? Browse other questions tagged [c++](/questions/tagged/c%2b%2b "show questions tagged 'c++'") [multithreading](/questions/tagged/multithreading "show questions tagged 'multithreading'") [c++11](/questions/tagged/c%2b%2b11 "show questions tagged 'c++11'") [thread-safety](/questions/tagged/thread-safety "show questions tagged 'thread-safety'") or [ask your own question](/questions/ask).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The Overflow Blog

*   [Five ways to create a continuous learning culture within a psychologically...](https://stackoverflow.blog/2022/02/03/five-ways-to-create-a-continuous-learning-culture-within-a-psychologically-safe-environment/?cb=1 "Five ways to create a continuous learning culture within a psychologically safe environment")
    
*   [Moving from CEO back to IC: A chat with Mitchell Hashimoto on his love for...](https://stackoverflow.blog/2022/02/04/moving-from-ceo-back-to-ic-a-chat-with-mitchell-hashimoto-on-his-love-for-code-ep-412/?cb=1 "Moving from CEO back to IC: A chat with Mitchell Hashimoto on his love for code (Ep. 412)")
    

Featured on Meta

*   [New post summary designs on site home pages and greatest hits now; everywhere...](https://meta.stackexchange.com/questions/375081/new-post-summary-designs-on-site-home-pages-and-greatest-hits-now-everywhere-el?cb=1 "New post summary designs on site home pages and greatest hits now; everywhere else eventually")
    
*   [Changes to answer sorting menu: moving menu, "Newest" sort option, renaming...](https://meta.stackexchange.com/questions/375749/changes-to-answer-sorting-menu-moving-menu-newest-sort-option-renaming-sort?cb=1 "Changes to answer sorting menu: moving menu, "Newest" sort option, renaming sort options")
    
*   [Outdated answers: up next, changes to sorting menu](https://meta.stackoverflow.com/questions/415738/outdated-answers-up-next-changes-to-sorting-menu?cb=1)
    

Hot Meta Posts

*   15
    
    [Is it OK to offer a user help on another platform?](https://meta.stackoverflow.com/questions/415812/is-it-ok-to-offer-a-user-help-on-another-platform?cb=1)
    
*   16
    
    [Are these Self-Answering rules valid as of today?](https://meta.stackoverflow.com/questions/415801/are-these-self-answering-rules-valid-as-of-today?cb=1)
    

#### Linked

[

19

](https://stackoverflow.com/q/21879331?lq=1 "Question score (upvotes - downvotes)")[Is std::atomic\_compare\_exchange\_weak thread-unsafe by design?](https://stackoverflow.com/questions/21879331/is-stdatomic-compare-exchange-weak-thread-unsafe-by-design?noredirect=1&lq=1)

[

8

](https://stackoverflow.com/q/16355425?lq=1 "Question score (upvotes - downvotes)")[C++ atomic with non-trivial type?](https://stackoverflow.com/questions/16355425/c-atomic-with-non-trivial-type?noredirect=1&lq=1)

[

4

](https://stackoverflow.com/q/45192021?lq=1 "Question score (upvotes - downvotes)")[Does std::atomic<struct> makes all member also atomic?](https://stackoverflow.com/questions/45192021/does-stdatomicstruct-makes-all-member-also-atomic?noredirect=1&lq=1)

[

2

](https://stackoverflow.com/q/47977348?lq=1 "Question score (upvotes - downvotes)")[std::atomic on a simple POD class](https://stackoverflow.com/questions/47977348/stdatomic-on-a-simple-pod-class?noredirect=1&lq=1)

[

1

](https://stackoverflow.com/q/63682484?lq=1 "Question score (upvotes - downvotes)")[C++ What atomic operations we can use on trival user defined data type](https://stackoverflow.com/questions/63682484/c-what-atomic-operations-we-can-use-on-trival-user-defined-data-type?noredirect=1&lq=1)

#### Related

[

636

](https://stackoverflow.com/q/115703?rq=1 "Question score (upvotes - downvotes)")[Storing C++ template function definitions in a .CPP file](https://stackoverflow.com/questions/115703/storing-c-template-function-definitions-in-a-cpp-file?rq=1)

[

472

](https://stackoverflow.com/q/117293?rq=1 "Question score (upvotes - downvotes)")[Use of 'const' for function parameters](https://stackoverflow.com/questions/117293/use-of-const-for-function-parameters?rq=1)

[

927

](https://stackoverflow.com/q/216823?rq=1 "Question score (upvotes - downvotes)")[How to trim a std::string?](https://stackoverflow.com/questions/216823/how-to-trim-a-stdstring?rq=1)

[

1421

](https://stackoverflow.com/q/2846653?rq=1 "Question score (upvotes - downvotes)")[How can I use threading in Python?](https://stackoverflow.com/questions/2846653/how-can-i-use-threading-in-python?rq=1)

[

950

](https://stackoverflow.com/q/6500313?rq=1 "Question score (upvotes - downvotes)")[Why should C++ programmers minimize use of 'new'?](https://stackoverflow.com/questions/6500313/why-should-c-programmers-minimize-use-of-new?rq=1)

[

1798

](https://stackoverflow.com/q/10168686?rq=1 "Question score (upvotes - downvotes)")[Image Processing: Algorithm Improvement for 'Coca-Cola Can' Recognition](https://stackoverflow.com/questions/10168686/image-processing-algorithm-improvement-for-coca-cola-can-recognition?rq=1)

[

617

](https://stackoverflow.com/q/10787766?rq=1 "Question score (upvotes - downvotes)")[When should I really use noexcept?](https://stackoverflow.com/questions/10787766/when-should-i-really-use-noexcept?rq=1)

[

1785

](https://stackoverflow.com/q/22146094?rq=1 "Question score (upvotes - downvotes)")[Why should I use a pointer rather than the object itself?](https://stackoverflow.com/questions/22146094/why-should-i-use-a-pointer-rather-than-the-object-itself?rq=1)

[

1550

](https://stackoverflow.com/q/25078285?rq=1 "Question score (upvotes - downvotes)")[Replacing a 32-bit loop counter with 64-bit introduces crazy performance deviations with \_mm\_popcnt\_u64 on Intel CPUs](https://stackoverflow.com/questions/25078285/replacing-a-32-bit-loop-counter-with-64-bit-introduces-crazy-performance-deviati?rq=1)

[

1552

](https://stackoverflow.com/q/36827659?rq=1 "Question score (upvotes - downvotes)")[Compiling an application for use in highly radioactive environments](https://stackoverflow.com/questions/36827659/compiling-an-application-for-use-in-highly-radioactive-environments?rq=1)

#### [Hot Network Questions](https://stackexchange.com/questions?tab=hot)

*   [How to merge join two matrixes?](https://mathematica.stackexchange.com/questions/263143/how-to-merge-join-two-matrixes)
*   [Why does Germany ban RT but not France24 or Voice of America?](https://politics.stackexchange.com/questions/70579/why-does-germany-ban-rt-but-not-france24-or-voice-of-america)
*   [How are radio telescopes pointed?](https://astronomy.stackexchange.com/questions/48397/how-are-radio-telescopes-pointed)
*   [Set theory with full comprehension](https://philosophy.stackexchange.com/questions/89336/set-theory-with-full-comprehension)
*   [Until when was Marseille Greek-speaking?](https://history.stackexchange.com/questions/68236/until-when-was-marseille-greek-speaking)
*   [Resistance-Capacitance (RC) Circuit](https://physics.stackexchange.com/questions/692950/resistance-capacitance-rc-circuit)
*   [How do I cd into a network share?](https://superuser.com/questions/1703217/how-do-i-cd-into-a-network-share)
*   [In the coat of arms of Georg von Frundsberg, where does the ostrich come from?](https://history.stackexchange.com/questions/68246/in-the-coat-of-arms-of-georg-von-frundsberg-where-does-the-ostrich-come-from)
*   [Should it be "lie low" in "Okay. I'll lay low for 24 hours"?](https://ell.stackexchange.com/questions/308932/should-it-be-lie-low-in-okay-ill-lay-low-for-24-hours)
*   [8yo daughter obsessed with books - escaping from something?](https://parenting.stackexchange.com/questions/42347/8yo-daughter-obsessed-with-books-escaping-from-something)
*   [A basic question about registers in embedded C](https://electronics.stackexchange.com/questions/607219/a-basic-question-about-registers-in-embedded-c)
*   [Does the RCC view 'prevention of ovulation' in the same light as 'abortion'?](https://christianity.stackexchange.com/questions/89467/does-the-rcc-view-prevention-of-ovulation-in-the-same-light-as-abortion)
*   [What are the benefits of moving larger amounts of money via wire transfer?](https://money.stackexchange.com/questions/149104/what-are-the-benefits-of-moving-larger-amounts-of-money-via-wire-transfer)
*   [How do you upgrade the Ubuntu Version without upgrading the packages?](https://serverfault.com/questions/1092527/how-do-you-upgrade-the-ubuntu-version-without-upgrading-the-packages)
*   [Can the sample equal the population?](https://stats.stackexchange.com/questions/563279/can-the-sample-equal-the-population)
*   [How to you wade a river/creek without getting water in your boots](https://outdoors.stackexchange.com/questions/28094/how-to-you-wade-a-river-creek-without-getting-water-in-your-boots)
*   [How could a galaxy be damaged by a civilization's industrial expansionism in ways that mirror our own current climate crisis?](https://worldbuilding.stackexchange.com/questions/223716/how-could-a-galaxy-be-damaged-by-a-civilizations-industrial-expansionism-in-way)
*   [Why is there an electric field around this closed electric circuit?](https://physics.stackexchange.com/questions/692903/why-is-there-an-electric-field-around-this-closed-electric-circuit)
*   [Old thing-like race from D&D 3.5e?](https://rpg.stackexchange.com/questions/195772/old-thing-like-race-from-dd-3-5e)
*   [Modern results that are widely known, yet which at the time were ignored, not accepted or critized](https://mathoverflow.net/questions/415458/modern-results-that-are-widely-known-yet-which-at-the-time-were-ignored-not-ac)
*   [Can a Windows 10 Machine that has both an Ethernet NIC and a Wi-Fi NIC get Internet via Wi-Fi, and Provide it to another device via Ethernet?](https://superuser.com/questions/1703362/can-a-windows-10-machine-that-has-both-an-ethernet-nic-and-a-wi-fi-nic-get-inter)
*   [What shells use readline?](https://unix.stackexchange.com/questions/689401/what-shells-use-readline)
*   [Is Gloom Stalker overpowered?](https://rpg.stackexchange.com/questions/195749/is-gloom-stalker-overpowered)
*   [Word for tiny bits of gold left after panning for gold?](https://english.stackexchange.com/questions/584202/word-for-tiny-bits-of-gold-left-after-panning-for-gold)

[Question feed](/feeds/question/13885617 "Feed of this question and its answers")

Subscribe to RSS
================

Question feed

To subscribe to this RSS feed, copy and paste this URL into your RSS reader.

 

[](#)

lang-cpp

##### [Stack Overflow](https://stackoverflow.com)

*   [Questions](/questions)
*   [Jobs](https://stackoverflow.com/jobs)
*   [Developer Jobs Directory](https://stackoverflow.com/jobs/directory/developer-jobs)
*   [Salary Calculator](https://stackoverflow.com/jobs/salary)
*   [Help](/help)
*   Mobile
*   Disable Responsiveness

##### [Products](https://stackoverflowbusiness.com)

*   [Teams](https://stackoverflow.com/teams)
*   [Talent](https://stackoverflow.com/talent)
*   [Advertising](https://stackoverflow.com/advertising)
*   [Enterprise](https://stackoverflowsolutions.com/explore-teams)

##### [Company](https://stackoverflow.com/company)

*   [About](https://stackoverflow.com/company)
*   [Press](https://stackoverflow.com/company/press)
*   [Work Here](https://stackoverflow.com/company/work-here)
*   [Legal](https://stackoverflow.com/legal)
*   [Privacy Policy](https://stackoverflow.com/legal/privacy-policy)
*   [Terms of Service](https://stackoverflow.com/legal/terms-of-service)
*   [Contact Us](https://stackoverflow.com/company/contact)
*   [Cookie Settings](#)
*   [Cookie Policy](https://stackoverflow.com/legal/cookie-policy)

##### [Stack Exchange Network](https://stackexchange.com)

*   [Technology](https://stackexchange.com/sites#technology)
*   [Culture & recreation](https://stackexchange.com/sites#culturerecreation)
*   [Life & arts](https://stackexchange.com/sites#lifearts)
*   [Science](https://stackexchange.com/sites#science)
*   [Professional](https://stackexchange.com/sites#professional)
*   [Business](https://stackexchange.com/sites#business)
*   [API](https://api.stackexchange.com/)
*   [Data](https://data.stackexchange.com/)

*   [Blog](https://stackoverflow.blog?blb=1)
*   [Facebook](https://www.facebook.com/officialstackoverflow/)
*   [Twitter](https://twitter.com/stackoverflow)
*   [LinkedIn](https://linkedin.com/company/stack-overflow)
*   [Instagram](https://www.instagram.com/thestackoverflow)

site design / logo © 2022 Stack Exchange Inc; user contributions licensed under [cc by-sa](https://stackoverflow.com/help/licensing). rev 2022.2.4.41374

![](https://www.gstatic.com/images/branding/product/1x/translate_24dp.png)

原文
==

提供更好的翻译建议

* * *