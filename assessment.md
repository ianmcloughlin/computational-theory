# Assessment Brief: Computational Theory, Winter 26/27

This assessment gives you an opportunity to show your achievement of the module learning outcomes.
The main part of the assessment is to complete the problems in the [Problems](#problems) section of this document.
Start by making a new GitHub repository solely for this assessment.
Create a new Jupyter notebook named `problems.ipynb` in the root of the repository.
Create a file called [`AGENTS.md`](https://realpython.com/agents-md/) in the root of your repository and copy [the contents of the example agents file in the notes section of this repo into it.](notes/example-agents.md?plain=1)
Submit the repository URL using the link below before the URL submission date.
You should then work consistently on your repository until the final deadline for commits below.
The last commit pushed to GitHub on or before the deadline will be assessed.

> [!IMPORTANT]
> [Submit Your Repository URL Here by 30 September 2026 (ATU Login required)](https://forms.cloud.microsoft/e/09Uaej1ig3)  
> 
> Final Deadline for Commits:  
> <ins>**20 December 2026**</ins>  

Always keep your latest work in GitHub.
If you have problems, especially with git, ask for help well before the deadline.
Do not delete your repository without consulting the lecturer.
Disproportionately large commits, especially near the final deadline, will usually not be accepted.
Make sure to consult and adhere to the policies on the student portal, such as those relating to student conduct and plagiarism.

## Target Audience

Complete the assessment with the following target audience in mind: an informed computing professional, such as a prospective employer.
Assume they have a strong background in computing but may not be familiar with the specific language, packages, or tools you use.
They should be able to clone your repository and run any code within it with minimal setup and without any extra help from you.
Include setup instructions in your `README.md`, and keep all necessary data files and images cleanly organized.
If any files are too large to include in your repository, explain this in your `README.md` and, where possible, provide code to automatically download them.

## Organization and Structure

Your submission should be in the `main` branch of your repository.
Include a clear [`README.md`](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes), a suitable [`.gitignore` file](https://www.toptal.com/developers/gitignore), and an [accurate `requirements.txt` file](https://realpython.com/what-is-pip/#using-requirements-files).
Avoid including [unnecessary files or folders](https://realpython.com/python-git-github-intro/#what-not-to-add-to-a-git-repo).
Use lowercase file and folder names, except for the usual files like `README.md`.
Do not use spaces or special characters in filenames.
Underscores, hyphens, and full stops are okay.

Your commit history should show how your work evolved: improvements, refinements, and added clarity.
Keep your notebook [reproducible, clean, and concise.](https://arxiv.org/pdf/2202.07233)
Use a [level 1 heading](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#headings) for the notebook title.
Use [level 2 Markdown headings](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#headings) to clearly identify each problem within the notebook.
Use Markdown cells to give explanations and insights into your code.

Follow Python coding standards and guidelines such as [PEP8](https://peps.python.org/pep-0008/).
Write clean, readable, and efficient code using meaningful variable names and consistent formatting.
Break code into smaller, manageable cells whenever possible.
Each code cell should focus on a single step in your overall solution.
Include [meaningful comments](https://realpython.com/python-comments-guide/) and [docstrings](https://peps.python.org/pep-0008/#documentation-strings) in your code.
You can use [modules in the standard library](https://en.wikipedia.org/wiki/Standard_library) and any of the packages in the [requirements.txt file in this repository](./requirements.txt) and their dependencies.
Ask before using anything else.

## Submission Checklist

- [ ] **Repository Link Submitted:** You have submitted your GitHub repository URL in the format `https://github.com/username/reponame` via the Microsoft Forms link above.

- [ ] **Agents file included from the start:** You have had the correct `AGENTS.md` in the root of your repository from the start.

- [ ] **Correct Notebook Name:** Your primary submission file is located in the root of the repository and is named exactly `problems.ipynb` (all lowercase, no spaces).

- [ ] **Essential Files:** Your repository includes a `.gitignore`, a `README.md` with setup instructions, and a `requirements.txt` listing all necessary Python packages (e.g., `numpy`).

- [ ] **Notebook Cell Order:** You have restarted the kernel and run all cells in your notebook to ensure they execute in sequential order (1, 2, 3...) without errors, providing a clean and reproducible output.

- [ ] **Folder Organization:** Any extra files are organized into subfolders; specifically, any datasets are in a `/data` folder and any images, plots, or diagrams are in an `/img` folder.

- [ ] **Repository Tidiness:** You have removed all irrelevant files (e.g., `.DS_Store`, `__pycache__`, local checkpoints, or temporary scratchpads).

- [ ] **Environment Reproducibility:** When someone clones your repo, they will likely use the following workflow. Ensure your `README.md` and `requirements.txt` make this process seamless:

    1. `git clone <repo-url>`
    2. `pip install -r requirements.txt`
    3. `jupyter notebook problems.ipynb`

## Marking Scheme

Your submission will be assessed across the following five equally-weighted categories.
Make sure you provide clear evidence within your repository of the criteria listed.
A good submission will meet most of the criteria in each category.
An excellent submission will demonstrably meet all the criteria.
Note that the overall impression your submission makes may influence marks in each category.

### Presentation

- Your repository should be well-organized, with a clear and logical structure.
- Your `README.md` should clearly explain the purpose of your repository and how to run any code it contains.
- Your notebook should present a clear narrative, making it easy to follow your thought process.
- A knowledgeable expert reviewing your repository should be able to understand its contents without your help.

### Research

- Your submission should demonstrate research on relevant topics, showing an understanding of the material.
- You should build upon existing literature and documentation rather than just presenting basic solutions.
- References and comparisons to similar work should be included.
- References should be put into context - how and why they are relevant to your submission.

### Documentation

- Your repository should contain standard files, such as a `README.md`, to provide context for your work.
- All concepts should be clearly and concisely explained within your notebooks.
- Code should include informative comments that clarify its purpose and functionality.
- Your `README.md` and notebook should have clear headings and provide a clear context for their contents.

### Development

- Your code should be efficient and well-structured, effectively addressing the problem at hand.
- Standard programming structures, algorithms, and testing methods should be applied where appropriate.
- The overall architecture of your code should be clean, demonstrating good coding practices.
- Your code should demonstrate your knowledge of established style conventions and norms.

### Consistency

- Each commit should focus clearly on a single unit of work.
- Your commit history should show consistent activity across the assessment period, not a burst of late submissions.
- Your repository should demonstrate incremental review and refinement rather than one-off completion.
- Commits should capture improvements to both code quality and explanations over time.

## Problems

Complete all problems below in your `problems.ipynb` notebook.
Your notebook should tell a story, using Markdown cells to explain your thinking and code cells to perform the technical tasks.
Your notebook must also run from top to bottom on a standard machine in three minutes or less.

The following problems are based on the [Secure Hash Standard](https://doi.org/10.6028/NIST.FIPS.180-4).


### Problem 0: GitHub Issues

Create GitHub Issues for the following problems, either using one issue per problem or breaking problems down into appropriate sub-issues.

Use the issues to track your progress.
Comment on your progress as you work and close each issue when you consider the corresponding problem complete.

### Problem 1: Representing SHA-256 Data

Before implementing SHA-256, investigate how the input, output, and intermediate data can be represented in Python.

Explain how you would represent:

- 32-bit words,
- sequences of 32-bit words,
- input messages,
- 512-bit message blocks,
- the final 256-bit hash value,
- big-endian integers.

For each representation, explain why it is appropriate and demonstrate your choices with small Python examples.

### Problem 2: SHA-256 Bitwise Operations

Implement the Boolean and bitwise functions used by SHA-256:

1. `Ch(x, y, z)`
2. `Maj(x, y, z)`
3. `Sigma0(x)` — written as $\Sigma_0^{256}(x)$ in the standard
4. `Sigma1(x)` — written as $\Sigma_1^{256}(x)$ in the standard
5. `sigma0(x)` — written as $\sigma_0^{256}(x)$ in the standard
6. `sigma1(x)` — written as $\sigma_1^{256}(x)$ in the standard

Use NumPy so that the values involved in these operations are represented as 32-bit unsigned integers.

For each function:

- provide an appropriate docstring,
- explain the operation in Markdown,
- implement the function directly from that definition,
- provide tests on appropriate inputs.

### Problem 3: Generating the SHA-256 Constants

The Secure Hash Standard defines the initial hash values and round constants used by SHA-256 using fractional parts of square and cube roots of prime numbers.

Use Python and NumPy to generate the 64 round constants specified in the standard.

Your solution should:

1. write a function `primes(n)` that generates the first `n` prime numbers,
2. calculate the cube roots of the first 64 primes,
3. extract the fractional part of each cube root,
4. convert the resulting to a 32-bit unsigned integer,
5. display the resulting constants in hexadecimal,
6. compare your results with the constants in the Secure Hash Standard.

### Problem 4: Padding and Parsing Messages

Write a generator function called `block_parse(msg)` that accepts a `bytes` object and yields the 512-bit message blocks required by SHA-256.

Each yielded block should contain sixteen 32-bit unsigned integers.

Implement the padding specified in sections 5.1.1 and 5.2.1 of the Secure Hash Standard, including:

- appending the `1` bit,
- appending the required zero bits,
- appending the original message length as a 64-bit integer,
- handling messages that require one or two final blocks,
- interpreting the message using the required byte order.

Test your implementation, including any boundary cases you can identify.

### Problem 5: The SHA-256 Compression Function

Implement the SHA-256 compression algorithm described in section 6.2.2 of the Secure Hash Standard.

Your implementation should explicitly construct the 64-word message schedule and perform the 64 rounds of the compression function.

Structure your implementation so that the major stages of the algorithm are identifiable in your code.

Explain:

- how the message schedule is constructed;
- the purpose of the eight working variables;
- how `Ch` and `Maj` are used;
- how the two $\Sigma$ functions are used;
- how the round constants are incorporated;
- how the working variables are updated;
- how the compressed state is combined with the previous hash state.

Use your `block_parse` generator and the functions implemented in the previous problems.

### Problem 6: Complete SHA-256

Combine your previous work into a function:

```python
sha256(msg)
```

The function should accept a `bytes` object and return its SHA-256 digest as a 64-character lowercase hexadecimal string.

Test your implementation against Python's `hashlib.sha256` using a range of inputs, including:

- the empty message,
- short ASCII strings,
- messages containing non-ASCII characters,
- messages whose lengths are close to padding boundaries,
- a longer message.

***

**End**
