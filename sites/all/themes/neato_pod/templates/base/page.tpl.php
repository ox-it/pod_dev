<div role="document" class="page">

<!-- "inner-wrapper" applies 'outer-container' NEAT grid: see layout.scss-->

 <!-- ______________________ HEADER _______________________ -->
  <div role="header" class="header-outer header-headline-outer">
    
    <div class="no-inner-wrapper header-headline">  
      <?php if (!empty($page['header-headline'])): ?>
        <header id="site-header" class="header-headline">
            <?php print render($page['header-headline']); ?>
        </header>
      <?php endif; ?>
    </div>
    
  </div>


  <div role="header" class="header-outer header-top-outer">

    <div class="no-inner-wrapper header-middle">

      <?php if (!empty($page['header-top-left'])): ?>
        <header id="site-header" class="header-top-left"> 
            <?php print render($page['header-top-left']); ?>   
        </header>
      <?php endif; ?>

      <?php if (!empty($page['header-top-right'])): ?>
        <header id="site-header" class="header-top-right">  
            <?php print render($page['header-top-right']); ?>
        </header>
      <?php endif; ?>

    </div>
    
  </div>

  <div role="header" class="header-outer header-middle-outer">

    <div class="inner-wrapper header-middle">

      <?php if (!empty($page['header-middle'])): ?>
        <header id="site-header" class="header-middle"> 
            <?php print render($page['header-middle']); ?>   
        </header>
      <?php endif; ?>

    </div>
    
  </div>


  <div role="header" class="header-outer header-bottom-outer">

    <div class="inner-wrapper header-bottom">

      <?php if (!empty($page['header-bottom-left'])): ?>
        <header id="site-header" class="header-bottom-left"> 
            <?php print render($page['header-bottom-left']); ?>   
        </header>
      <?php endif; ?>

      <?php if (!empty($page['header-bottom-right'])): ?>
        <header id="site-header" class="header-bottom-right">  
            <?php print render($page['header-bottom-right']); ?>
        </header>
      <?php endif; ?>

    </div>
    
  </div>
    


<!-- ______________________ FEATURED _______________________ -->
  <div class="featured-outer featured-outer-one">

      <?php if (!empty($page['featured-one'])): ?>
        <section id="featured" class="inner-wrapper">      
            <?php print render($page['featured-one']); ?>
        </section>
      <?php endif; ?>

  </div>

  <div class="featured-outer featured-outer-two">

      <?php if (!empty($page['featured-two'])): ?>
        <section id="featured-two" class="inner-wrapper">      
            <?php print render($page['featured-two']); ?>
        </section>
      <?php endif; ?>

  </div>

  <div class="featured-outer featured-outer-three">

      <?php if (!empty($page['featured-three'])): ?>
        <section id="featured-three" class="inner-wrapper">      
            <?php print render($page['featured-three']); ?>
        </section>
      <?php endif; ?>

  </div>

  <div class="featured-outer featured-outer-four">

      <?php if (!empty($page['featured-four'])): ?>
        <section id="featured-four" class="inner-wrapper">      
            <?php print render($page['featured-four']); ?>
        </section>
      <?php endif; ?>

  </div>

  <div class="featured-outer featured-outer-five">

      <?php if (!empty($page['featured-five'])): ?>
        <header id="featured-five" class="inner-wrapper">      
            <?php print render($page['featured-five']); ?>
        </header>
      <?php endif; ?>

  </div>

  <div class="featured-outer featured-outer-six">

      <?php if (!empty($page['featured-six'])): ?>
        <header id="featured-six" class="inner-wrapper">      
            <?php print render($page['featured-six']); ?>
        </header>
      <?php endif; ?>

  </div>
<!-- ______________________ ERROR _______________________ -->
 
  <?php if ($messages): ?>
    <section id="messages">
      <div class="inner-wrapper">
        <?php print $messages; ?>
      </div>
    </section>
  <?php endif; ?>

<!-- ______________________ BREADCRUMB _______________________ -->
  
<!--   <div class="breadcrumb-outer">

    <?php if ($breadcrumb): ?>
      <header id="breadcrumb" class="inner-wrapper">
          <?php print $breadcrumb; ?>
      </header>
    <?php endif; ?>

  </div> -->


<!-- ______________________ MAIN _______________________ -->

  <div class="main-outer">

    <main role="main" class="main">
      <?php if (!empty($page['sidebar_first'])): ?>
        <aside id="sidebar-first" role="complementary" class="sidebar">
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?>

      <section id="content">
        <?php if ($title): ?>
          <?php print render($title_prefix); ?>
            <h1 id="page-title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside id="sidebar-second" role="complementary" class="sidebar">
          <?php print render($page['sidebar_second']); ?>
        </aside>
      <?php endif; ?>
    </main>

  </div>



<!-- ______________________ FOOTER _______________________ -->

  <div role="footer" class="footer-outer footer-top-outer">

    <div class="inner-wrapper">
      <?php if (!empty($page['footer_top_left'])): ?>
        <footer id="footer-top-left" class="footer-top-left" role="contentinfo">
          <?php print render($page['footer_top_left']); ?>
        </footer>
      <?php endif; ?>
  
      <?php if (!empty($page['footer_top_right'])): ?>
        <footer id="footer-top-right" class="footer-top-right" role="contentinfo">
          <?php print render($page['footer_top_right']); ?>
        </footer>
      <?php endif; ?>
    </div>

  </div>

  <div role="footer" class="footer-outer footer-bottom-outer">

    <div class="no-inner-wrapper">
      <?php if (!empty($page['footer_hidden_one'])): ?>
        <footer id="footer-bottom" class="footer-hidden-one" role="contentinfo">
          <?php print render($page['footer_hidden_one']); ?>
        </footer>
      <?php endif; ?>
    </div>

    <div class="no-inner-wrapper">
      <?php if (!empty($page['footer_hidden_two'])): ?>
        <footer id="footer" class="footer-hidden-two" role="contentinfo">
          <?php print render($page['footer_hidden_two']); ?>
        </footer>
      <?php endif; ?>
    </div>

  </div>


</div>