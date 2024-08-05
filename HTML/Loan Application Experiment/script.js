function showSummary() {
    let name = document.getElementById('name').value;
    let dob = document.getElementById('dob').value;
    let gender = document.getElementById('gender').value;
    let email = document.getElementById('email').value;
    let phone = document.getElementById('phone').value;
    let address = document.getElementById('address').value;
    let loanAmount = document.getElementById('loanAmount').value;
    let loanPurpose = document.getElementById('loanPurpose').value;
    let employed = document.getElementById('employed').checked ? 'Employed' : '';
    let selfEmployed = document.getElementById('selfEmployed').checked ? 'Self-Employed' : '';
    let unemployed = document.getElementById('unemployed').checked ? 'Unemployed' : '';
    let employmentStatus = [employed, selfEmployed, unemployed].filter(Boolean).join(', ');
    let monthlyIncome = document.getElementById('monthlyIncome').value;
    let employmentDetails = document.getElementById('employmentDetails').value;

    let summary = `
        <h4>Summary of Your Inputs</h4>
        <p>Name: ${name}</p>
        <p>Date of Birth: ${dob}</p>
        <p>Gender: ${gender}</p>
        <p>Email: ${email}</p>
        <p>Phone Number: ${phone}</p>
        <p>Address: ${address}</p>
        <p>Loan Amount: ${loanAmount}</p>
        <p>Loan Purpose: ${loanPurpose}</p>
        <p>Employment Status: ${employmentStatus}</p>
        <p>Monthly Income: ${monthlyIncome}</p>
        <p>Employment Details: ${employmentDetails}</p>
    `;

    document.getElementById('summary').innerHTML = summary;
    document.getElementById('summary').style.display = 'block';
}
